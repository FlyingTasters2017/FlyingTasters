/* User code: This file will not be overwritten by TASTE. */

#include "function1.h"
#include "jsmn.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static const char *JSON_STRING =
        "{\"row\": 25.363683654542, \"pitch\": 35.234324231231, \"yaw\": 2.56456425454}";

static int jsoneq(const char *json, jsmntok_t *tok, const char *s) {
        if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start &&
                        strncmp(json + tok->start, s, tok->end - tok->start) == 0) {
                return 0;
        }
        return -1;
}

void function1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void function1_PI_pulse()
{
    int i;
    int r;
        jsmn_parser p;
        jsmntok_t t[128]; /* We expect no more than 128 tokens */

        jsmn_init(&p);
        r = jsmn_parse(&p, JSON_STRING, strlen(JSON_STRING), t, sizeof(t)/sizeof(t[0]));
        if (r < 0) {
                printf("Failed to parse JSON: %d\n", r);
        }

        /* Assume the top-level element is an object */
        if (r < 1 || t[0].type != JSMN_OBJECT) {
                printf("Object expected\n");
        }

        /* Loop over all keys of the root object */
        for (i = 1; i < r; i++) {
                if (jsoneq(JSON_STRING, &t[i], "row") == 0) {
                        /* We may use strndup() to fetch string value */
                        printf("- row: %.*s\n", t[i+1].end-t[i+1].start,
                                        JSON_STRING + t[i+1].start);
                        i++;
                } else if (jsoneq(JSON_STRING, &t[i], "pitch") == 0) {
                        /* We may additionally check if the value is either "true" or "false" */
                        printf("- pitch: %.*s\n", t[i+1].end-t[i+1].start,
                                        JSON_STRING + t[i+1].start);
                        i++;
                } else if (jsoneq(JSON_STRING, &t[i], "yaw") == 0) {
                        /* We may want to do strtol() here to get numeric value */
                        printf("- yaw: %.*s\n", t[i+1].end-t[i+1].start,
                                        JSON_STRING + t[i+1].start);
                        i++;
                } else {
                        printf("Unexpected key: %.*s\n", t[i].end-t[i].start,
                                        JSON_STRING + t[i].start);
                }
        }
}

