pragma Ada_95;
with System;
package ada_main is
   pragma Warnings (Off);

   procedure adainit;
   pragma Export (C, adainit, "adainit");

   procedure adafinal;
   pragma Export (C, adafinal, "adafinal");

   type Version_32 is mod 2 ** 32;
   u00001 : constant Version_32 := 16#5cae9d76#;
   pragma Export (C, u00001, "tasteadaS");
   u00002 : constant Version_32 := 16#a964624f#;
   pragma Export (C, u00002, "system__standard_libraryB");
   u00003 : constant Version_32 := 16#ec0c916c#;
   pragma Export (C, u00003, "system__standard_libraryS");
   u00004 : constant Version_32 := 16#764debe7#;
   pragma Export (C, u00004, "obswB");
   u00005 : constant Version_32 := 16#0cf9c5c5#;
   pragma Export (C, u00005, "obswS");
   u00006 : constant Version_32 := 16#3ffc8e18#;
   pragma Export (C, u00006, "adaS");
   u00007 : constant Version_32 := 16#84ad4a42#;
   pragma Export (C, u00007, "ada__numericsS");
   u00008 : constant Version_32 := 16#bd760655#;
   pragma Export (C, u00008, "systemS");
   u00009 : constant Version_32 := 16#7ff7f3a3#;
   pragma Export (C, u00009, "system__exception_tableB");
   u00010 : constant Version_32 := 16#41f44e68#;
   pragma Export (C, u00010, "system__exception_tableS");
   u00011 : constant Version_32 := 16#c3335bfd#;
   pragma Export (C, u00011, "system__htableB");
   u00012 : constant Version_32 := 16#39b4b5bf#;
   pragma Export (C, u00012, "system__htableS");
   u00013 : constant Version_32 := 16#089f5cd0#;
   pragma Export (C, u00013, "system__string_hashB");
   u00014 : constant Version_32 := 16#9beadec1#;
   pragma Export (C, u00014, "system__string_hashS");
   u00015 : constant Version_32 := 16#77a147eb#;
   pragma Export (C, u00015, "system__soft_linksB");
   u00016 : constant Version_32 := 16#4c165de8#;
   pragma Export (C, u00016, "system__soft_linksS");
   u00017 : constant Version_32 := 16#65bb1402#;
   pragma Export (C, u00017, "system__parametersB");
   u00018 : constant Version_32 := 16#16fab23f#;
   pragma Export (C, u00018, "system__parametersS");
   u00019 : constant Version_32 := 16#643ddf46#;
   pragma Export (C, u00019, "system__secondary_stackB");
   u00020 : constant Version_32 := 16#1617c93c#;
   pragma Export (C, u00020, "system__secondary_stackS");
   u00021 : constant Version_32 := 16#39a03df9#;
   pragma Export (C, u00021, "system__storage_elementsB");
   u00022 : constant Version_32 := 16#90b54c51#;
   pragma Export (C, u00022, "system__storage_elementsS");
   u00023 : constant Version_32 := 16#c402bf3d#;
   pragma Export (C, u00023, "ada__exceptionsB");
   u00024 : constant Version_32 := 16#ccec0589#;
   pragma Export (C, u00024, "ada__exceptionsS");
   u00025 : constant Version_32 := 16#51ba2b93#;
   pragma Export (C, u00025, "ada__exceptions__last_chance_handlerB");
   u00026 : constant Version_32 := 16#909606f8#;
   pragma Export (C, u00026, "ada__exceptions__last_chance_handlerS");
   u00027 : constant Version_32 := 16#9e373b74#;
   pragma Export (C, u00027, "system__exceptionsB");
   u00028 : constant Version_32 := 16#8568a0f7#;
   pragma Export (C, u00028, "system__exceptionsS");
   u00029 : constant Version_32 := 16#cd9019cf#;
   pragma Export (C, u00029, "system__exceptions__machineS");
   u00030 : constant Version_32 := 16#a2eb6533#;
   pragma Export (C, u00030, "system__exceptions_debugB");
   u00031 : constant Version_32 := 16#467117ed#;
   pragma Export (C, u00031, "system__exceptions_debugS");
   u00032 : constant Version_32 := 16#570325c8#;
   pragma Export (C, u00032, "system__img_intB");
   u00033 : constant Version_32 := 16#bfade697#;
   pragma Export (C, u00033, "system__img_intS");
   u00034 : constant Version_32 := 16#ff5c7695#;
   pragma Export (C, u00034, "system__tracebackB");
   u00035 : constant Version_32 := 16#95729908#;
   pragma Export (C, u00035, "system__tracebackS");
   u00036 : constant Version_32 := 16#8c33a517#;
   pragma Export (C, u00036, "system__wch_conB");
   u00037 : constant Version_32 := 16#a60b2487#;
   pragma Export (C, u00037, "system__wch_conS");
   u00038 : constant Version_32 := 16#9721e840#;
   pragma Export (C, u00038, "system__wch_stwB");
   u00039 : constant Version_32 := 16#8b1a0886#;
   pragma Export (C, u00039, "system__wch_stwS");
   u00040 : constant Version_32 := 16#9b29844d#;
   pragma Export (C, u00040, "system__wch_cnvB");
   u00041 : constant Version_32 := 16#a9bc9e74#;
   pragma Export (C, u00041, "system__wch_cnvS");
   u00042 : constant Version_32 := 16#69adb1b9#;
   pragma Export (C, u00042, "interfacesS");
   u00043 : constant Version_32 := 16#ece6fdb6#;
   pragma Export (C, u00043, "system__wch_jisB");
   u00044 : constant Version_32 := 16#29cc8755#;
   pragma Export (C, u00044, "system__wch_jisS");
   u00045 : constant Version_32 := 16#8cb17bcd#;
   pragma Export (C, u00045, "system__traceback_entriesB");
   u00046 : constant Version_32 := 16#086766c7#;
   pragma Export (C, u00046, "system__traceback_entriesS");
   u00047 : constant Version_32 := 16#41837d1e#;
   pragma Export (C, u00047, "system__stack_checkingB");
   u00048 : constant Version_32 := 16#33c96dbd#;
   pragma Export (C, u00048, "system__stack_checkingS");
   u00049 : constant Version_32 := 16#32a273ac#;
   pragma Export (C, u00049, "adaasn1rtlB");
   u00050 : constant Version_32 := 16#7742fb7c#;
   pragma Export (C, u00050, "adaasn1rtlS");
   u00051 : constant Version_32 := 16#0be1b996#;
   pragma Export (C, u00051, "system__exn_llfB");
   u00052 : constant Version_32 := 16#3cf218ba#;
   pragma Export (C, u00052, "system__exn_llfS");
   u00053 : constant Version_32 := 16#189d768f#;
   pragma Export (C, u00053, "system__fat_lfltS");
   u00054 : constant Version_32 := 16#ec7094fa#;
   pragma Export (C, u00054, "system__unsigned_typesS");
   u00055 : constant Version_32 := 16#12c24a43#;
   pragma Export (C, u00055, "ada__charactersS");
   u00056 : constant Version_32 := 16#4b7bb96a#;
   pragma Export (C, u00056, "ada__characters__latin_1S");
   u00057 : constant Version_32 := 16#d7aac20c#;
   pragma Export (C, u00057, "system__ioB");
   u00058 : constant Version_32 := 16#2334f11a#;
   pragma Export (C, u00058, "system__ioS");
   u00059 : constant Version_32 := 16#dde00744#;
   pragma Export (C, u00059, "taste_basictypesB");
   u00060 : constant Version_32 := 16#cd18cea5#;
   pragma Export (C, u00060, "taste_basictypesS");
   u00061 : constant Version_32 := 16#bdc62afa#;
   pragma Export (C, u00061, "taste_dataviewB");
   u00062 : constant Version_32 := 16#a6f8214c#;
   pragma Export (C, u00062, "taste_dataviewS");
   u00063 : constant Version_32 := 16#6810466c#;
   pragma Export (C, u00063, "system__memoryB");
   u00064 : constant Version_32 := 16#e40b6061#;
   pragma Export (C, u00064, "system__memoryS");
   u00065 : constant Version_32 := 16#92f4da28#;
   pragma Export (C, u00065, "system__crtlS");
   --  BEGIN ELABORATION ORDER
   --  ada%s
   --  ada.characters%s
   --  ada.characters.latin_1%s
   --  interfaces%s
   --  system%s
   --  system.exn_llf%s
   --  system.exn_llf%b
   --  system.htable%s
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
   --  system.string_hash%s
   --  system.string_hash%b
   --  system.htable%b
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
   --  system.traceback%s
   --  ada.exceptions%b
   --  system.traceback%b
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
