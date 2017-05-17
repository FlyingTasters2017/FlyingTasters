function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Inp */
	this.urlHashMap["Compute_Thrust:1"] = "Compute_Thrust.c:37&Compute_Thrust.h:41";
	/* <Root>/Outp */
	this.urlHashMap["Compute_Thrust:2"] = "Compute_Thrust.c:36&Compute_Thrust.h:46";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Compute_Thrust"};
	this.sidHashMap["Compute_Thrust"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Inp"] = {sid: "Compute_Thrust:1"};
	this.sidHashMap["Compute_Thrust:1"] = {rtwname: "<Root>/Inp"};
	this.rtwnameHashMap["<Root>/Outp"] = {sid: "Compute_Thrust:2"};
	this.sidHashMap["Compute_Thrust:2"] = {rtwname: "<Root>/Outp"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
