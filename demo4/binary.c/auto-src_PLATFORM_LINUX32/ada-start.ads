pragma Ada_95;
pragma Warnings (Off);
with System;
package ada_main is

   procedure adainit;
   pragma Export (C, adainit, "adainit");

   procedure adafinal;
   pragma Export (C, adafinal, "adafinal");

   type Version_32 is mod 2 ** 32;
   u00001 : constant Version_32 := 16#d5f58b87#;
   pragma Export (C, u00001, "tasteadaS");
   u00002 : constant Version_32 := 16#b6df930e#;
   pragma Export (C, u00002, "system__standard_libraryB");
   u00003 : constant Version_32 := 16#36a12203#;
   pragma Export (C, u00003, "system__standard_libraryS");
   u00004 : constant Version_32 := 16#8954e85a#;
   pragma Export (C, u00004, "obswB");
   u00005 : constant Version_32 := 16#85a2d334#;
   pragma Export (C, u00005, "obswS");
   u00006 : constant Version_32 := 16#3ffc8e18#;
   pragma Export (C, u00006, "adaS");
   u00007 : constant Version_32 := 16#84ad4a42#;
   pragma Export (C, u00007, "ada__numericsS");
   u00008 : constant Version_32 := 16#c6f79445#;
   pragma Export (C, u00008, "systemS");
   u00009 : constant Version_32 := 16#87a448ff#;
   pragma Export (C, u00009, "system__exception_tableB");
   u00010 : constant Version_32 := 16#9b59fd07#;
   pragma Export (C, u00010, "system__exception_tableS");
   u00011 : constant Version_32 := 16#465d427a#;
   pragma Export (C, u00011, "system__soft_linksB");
   u00012 : constant Version_32 := 16#58734c10#;
   pragma Export (C, u00012, "system__soft_linksS");
   u00013 : constant Version_32 := 16#b01dad17#;
   pragma Export (C, u00013, "system__parametersB");
   u00014 : constant Version_32 := 16#b8dd993a#;
   pragma Export (C, u00014, "system__parametersS");
   u00015 : constant Version_32 := 16#0f0cb66d#;
   pragma Export (C, u00015, "system__secondary_stackB");
   u00016 : constant Version_32 := 16#6d965b2c#;
   pragma Export (C, u00016, "system__secondary_stackS");
   u00017 : constant Version_32 := 16#39a03df9#;
   pragma Export (C, u00017, "system__storage_elementsB");
   u00018 : constant Version_32 := 16#eb34de41#;
   pragma Export (C, u00018, "system__storage_elementsS");
   u00019 : constant Version_32 := 16#42f0179b#;
   pragma Export (C, u00019, "ada__exceptionsB");
   u00020 : constant Version_32 := 16#a7decac7#;
   pragma Export (C, u00020, "ada__exceptionsS");
   u00021 : constant Version_32 := 16#e947e6a9#;
   pragma Export (C, u00021, "ada__exceptions__last_chance_handlerB");
   u00022 : constant Version_32 := 16#41e5552e#;
   pragma Export (C, u00022, "ada__exceptions__last_chance_handlerS");
   u00023 : constant Version_32 := 16#ce4af020#;
   pragma Export (C, u00023, "system__exceptionsB");
   u00024 : constant Version_32 := 16#ae94f9b3#;
   pragma Export (C, u00024, "system__exceptionsS");
   u00025 : constant Version_32 := 16#4c9e814d#;
   pragma Export (C, u00025, "system__exceptions__machineS");
   u00026 : constant Version_32 := 16#aa0563fc#;
   pragma Export (C, u00026, "system__exceptions_debugB");
   u00027 : constant Version_32 := 16#b87d6d81#;
   pragma Export (C, u00027, "system__exceptions_debugS");
   u00028 : constant Version_32 := 16#570325c8#;
   pragma Export (C, u00028, "system__img_intB");
   u00029 : constant Version_32 := 16#c42c7487#;
   pragma Export (C, u00029, "system__img_intS");
   u00030 : constant Version_32 := 16#39df8c17#;
   pragma Export (C, u00030, "system__tracebackB");
   u00031 : constant Version_32 := 16#98d54a81#;
   pragma Export (C, u00031, "system__tracebackS");
   u00032 : constant Version_32 := 16#9ed49525#;
   pragma Export (C, u00032, "system__traceback_entriesB");
   u00033 : constant Version_32 := 16#c6ac6235#;
   pragma Export (C, u00033, "system__traceback_entriesS");
   u00034 : constant Version_32 := 16#6fd210f2#;
   pragma Export (C, u00034, "system__traceback__symbolicB");
   u00035 : constant Version_32 := 16#dd19f67a#;
   pragma Export (C, u00035, "system__traceback__symbolicS");
   u00036 : constant Version_32 := 16#701f9d88#;
   pragma Export (C, u00036, "ada__exceptions__tracebackB");
   u00037 : constant Version_32 := 16#20245e75#;
   pragma Export (C, u00037, "ada__exceptions__tracebackS");
   u00038 : constant Version_32 := 16#57a37a42#;
   pragma Export (C, u00038, "system__address_imageB");
   u00039 : constant Version_32 := 16#671b097f#;
   pragma Export (C, u00039, "system__address_imageS");
   u00040 : constant Version_32 := 16#8c33a517#;
   pragma Export (C, u00040, "system__wch_conB");
   u00041 : constant Version_32 := 16#dd8ab697#;
   pragma Export (C, u00041, "system__wch_conS");
   u00042 : constant Version_32 := 16#9721e840#;
   pragma Export (C, u00042, "system__wch_stwB");
   u00043 : constant Version_32 := 16#f09b9a96#;
   pragma Export (C, u00043, "system__wch_stwS");
   u00044 : constant Version_32 := 16#b96cfbef#;
   pragma Export (C, u00044, "system__wch_cnvB");
   u00045 : constant Version_32 := 16#d23d0c64#;
   pragma Export (C, u00045, "system__wch_cnvS");
   u00046 : constant Version_32 := 16#4be8ce1b#;
   pragma Export (C, u00046, "interfacesS");
   u00047 : constant Version_32 := 16#ece6fdb6#;
   pragma Export (C, u00047, "system__wch_jisB");
   u00048 : constant Version_32 := 16#524d1545#;
   pragma Export (C, u00048, "system__wch_jisS");
   u00049 : constant Version_32 := 16#41837d1e#;
   pragma Export (C, u00049, "system__stack_checkingB");
   u00050 : constant Version_32 := 16#4848ffad#;
   pragma Export (C, u00050, "system__stack_checkingS");
   u00051 : constant Version_32 := 16#10e70c0e#;
   pragma Export (C, u00051, "adaasn1rtlB");
   u00052 : constant Version_32 := 16#550784de#;
   pragma Export (C, u00052, "adaasn1rtlS");
   u00053 : constant Version_32 := 16#6c05c057#;
   pragma Export (C, u00053, "system__exn_llfB");
   u00054 : constant Version_32 := 16#7a892f99#;
   pragma Export (C, u00054, "system__exn_llfS");
   u00055 : constant Version_32 := 16#b8b0815c#;
   pragma Export (C, u00055, "system__fat_lfltS");
   u00056 : constant Version_32 := 16#5baf3085#;
   pragma Export (C, u00056, "system__unsigned_typesS");
   u00057 : constant Version_32 := 16#12c24a43#;
   pragma Export (C, u00057, "ada__charactersS");
   u00058 : constant Version_32 := 16#4b7bb96a#;
   pragma Export (C, u00058, "ada__characters__latin_1S");
   u00059 : constant Version_32 := 16#d7aac20c#;
   pragma Export (C, u00059, "system__ioB");
   u00060 : constant Version_32 := 16#58b5630a#;
   pragma Export (C, u00060, "system__ioS");
   u00061 : constant Version_32 := 16#dde00744#;
   pragma Export (C, u00061, "taste_basictypesB");
   u00062 : constant Version_32 := 16#b6995cb5#;
   pragma Export (C, u00062, "taste_basictypesS");
   u00063 : constant Version_32 := 16#bdc62afa#;
   pragma Export (C, u00063, "taste_dataviewB");
   u00064 : constant Version_32 := 16#dd79b35c#;
   pragma Export (C, u00064, "taste_dataviewS");
   u00065 : constant Version_32 := 16#58e7cff7#;
   pragma Export (C, u00065, "system__memoryB");
   u00066 : constant Version_32 := 16#9f8af271#;
   pragma Export (C, u00066, "system__memoryS");
   u00067 : constant Version_32 := 16#b666424b#;
   pragma Export (C, u00067, "system__crtlS");
   --  BEGIN ELABORATION ORDER
   --  ada%s
   --  ada.characters%s
   --  ada.characters.latin_1%s
   --  interfaces%s
   --  system%s
   --  system.exn_llf%s
   --  system.exn_llf%b
   --  system.img_int%s
   --  system.img_int%b
   --  system.io%s
   --  system.io%b
   --  system.parameters%s
   --  system.parameters%b
   --  system.crtl%s
   --  system.standard_library%s
   --  system.exceptions_debug%s
   --  system.exceptions_debug%b
   --  system.storage_elements%s
   --  system.storage_elements%b
   --  system.stack_checking%s
   --  system.stack_checking%b
   --  system.traceback_entries%s
   --  system.traceback_entries%b
   --  ada.exceptions%s
   --  system.soft_links%s
   --  system.unsigned_types%s
   --  system.fat_lflt%s
   --  system.wch_con%s
   --  system.wch_con%b
   --  system.wch_cnv%s
   --  system.wch_jis%s
   --  system.wch_jis%b
   --  system.wch_cnv%b
   --  system.wch_stw%s
   --  system.wch_stw%b
   --  ada.exceptions.last_chance_handler%s
   --  ada.exceptions.last_chance_handler%b
   --  ada.exceptions.traceback%s
   --  system.address_image%s
   --  system.exception_table%s
   --  system.exception_table%b
   --  ada.numerics%s
   --  system.exceptions%s
   --  system.exceptions%b
   --  system.exceptions.machine%s
   --  system.memory%s
   --  system.memory%b
   --  system.standard_library%b
   --  system.secondary_stack%s
   --  system.soft_links%b
   --  system.secondary_stack%b
   --  system.address_image%b
   --  ada.exceptions.traceback%b
   --  system.traceback%s
   --  system.traceback%b
   --  system.traceback.symbolic%s
   --  system.traceback.symbolic%b
   --  ada.exceptions%b
   --  adaasn1rtl%s
   --  adaasn1rtl%b
   --  taste_basictypes%s
   --  taste_basictypes%b
   --  taste_dataview%s
   --  taste_dataview%b
   --  obsw%s
   --  obsw%b
   --  tasteada%s
   --  END ELABORATION ORDER


end ada_main;
