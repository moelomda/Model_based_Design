function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["CalculatorSF_Task_DW"] = {file: "CalculatorSF_Task_c.html",line:20,type:"var"};
this.def["CalculatorSF_Task_U"] = {file: "CalculatorSF_Task_c.html",line:23,type:"var"};
this.def["CalculatorSF_Task_Y"] = {file: "CalculatorSF_Task_c.html",line:26,type:"var"};
this.def["CalculatorSF_Task.c:CalculatorSF_Task_M_"] = {file: "CalculatorSF_Task_c.html",line:29,type:"var"};
this.def["CalculatorSF_Task_M"] = {file: "CalculatorSF_Task_c.html",line:30,type:"var"};
this.def["CalculatorSF_Task_step"] = {file: "CalculatorSF_Task_c.html",line:33,type:"fcn"};
this.def["CalculatorSF_Task_initialize"] = {file: "CalculatorSF_Task_c.html",line:47,type:"fcn"};
this.def["CalculatorSF_Task_terminate"] = {file: "CalculatorSF_Task_c.html",line:56,type:"fcn"};
this.def["DW_CalculatorSF_Task_T"] = {file: "CalculatorSF_Task_h.html",line:40,type:"type"};
this.def["ExtU_CalculatorSF_Task_T"] = {file: "CalculatorSF_Task_h.html",line:47,type:"type"};
this.def["ExtY_CalculatorSF_Task_T"] = {file: "CalculatorSF_Task_h.html",line:52,type:"type"};
this.def["RT_MODEL_CalculatorSF_Task_T"] = {file: "CalculatorSF_Task_types_h.html",line:22,type:"type"};
this.def["Calculator.c:CalculatorSF_Task_add"] = {file: "Calculator_c.html",line:29,type:"fcn"};
this.def["Calculator.c:CalculatorSF_Task_sub"] = {file: "Calculator_c.html",line:36,type:"fcn"};
this.def["Calculator.c:CalculatorSF_Task_divide"] = {file: "Calculator_c.html",line:43,type:"fcn"};
this.def["Calculator.c:CalculatorSF_Task_multiply"] = {file: "Calculator_c.html",line:55,type:"fcn"};
this.def["CalculatorSF_Ta_Calculator_Init"] = {file: "Calculator_c.html",line:62,type:"fcn"};
this.def["CalculatorSF_Task_Calculator"] = {file: "Calculator_c.html",line:68,type:"fcn"};
this.def["DW_Calculator_CalculatorSF_Ta_T"] = {file: "Calculator_h.html",line:28,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["CalculatorSF_Task_c.html"] = "../CalculatorSF_Task.c";
	this.html2Root["CalculatorSF_Task_c.html"] = "CalculatorSF_Task_c.html";
	this.html2SrcPath["CalculatorSF_Task_h.html"] = "../CalculatorSF_Task.h";
	this.html2Root["CalculatorSF_Task_h.html"] = "CalculatorSF_Task_h.html";
	this.html2SrcPath["CalculatorSF_Task_private_h.html"] = "../CalculatorSF_Task_private.h";
	this.html2Root["CalculatorSF_Task_private_h.html"] = "CalculatorSF_Task_private_h.html";
	this.html2SrcPath["CalculatorSF_Task_types_h.html"] = "../CalculatorSF_Task_types.h";
	this.html2Root["CalculatorSF_Task_types_h.html"] = "CalculatorSF_Task_types_h.html";
	this.html2SrcPath["Calculator_c.html"] = "../Calculator.c";
	this.html2Root["Calculator_c.html"] = "Calculator_c.html";
	this.html2SrcPath["Calculator_h.html"] = "../Calculator.h";
	this.html2Root["Calculator_h.html"] = "Calculator_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","CalculatorSF_Task_c.html","CalculatorSF_Task_h.html","CalculatorSF_Task_private_h.html","CalculatorSF_Task_types_h.html","Calculator_c.html","Calculator_h.html","rtwtypes_h.html"];
