pragma Ada_95;
pragma Source_File_Name (ada_main, Spec_File_Name => "ada-start.ads");
pragma Source_File_Name (ada_main, Body_File_Name => "ada-start.adb");

package body ada_main is
   pragma Warnings (Off);

   E16 : Short_Integer; pragma Import (Ada, E16, "system__soft_links_E");
   E53 : Short_Integer; pragma Import (Ada, E53, "system__fat_lflt_E");
   E10 : Short_Integer; pragma Import (Ada, E10, "system__exception_table_E");
   E07 : Short_Integer; pragma Import (Ada, E07, "ada__numerics_E");
   E28 : Short_Integer; pragma Import (Ada, E28, "system__exceptions_E");
   E20 : Short_Integer; pragma Import (Ada, E20, "system__secondary_stack_E");
   E50 : Short_Integer; pragma Import (Ada, E50, "adaasn1rtl_E");
   E60 : Short_Integer; pragma Import (Ada, E60, "taste_basictypes_E");
   E62 : Short_Integer; pragma Import (Ada, E62, "taste_dataview_E");
   E05 : Short_Integer; pragma Import (Ada, E05, "obsw_E");

   Local_Priority_Specific_Dispatching : constant String := "";
   Local_Interrupt_States : constant String := "";

   Is_Elaborated : Boolean := False;

   procedure adafinal is
   begin
      if not Is_Elaborated then
         return;
      end if;
      Is_Elaborated := False;
      null;
   end adafinal;

   type No_Param_Proc is access procedure;

   procedure adainit is
      Main_Priority : Integer;
      pragma Import (C, Main_Priority, "__gl_main_priority");
      Time_Slice_Value : Integer;
      pragma Import (C, Time_Slice_Value, "__gl_time_slice_val");
      WC_Encoding : Character;
      pragma Import (C, WC_Encoding, "__gl_wc_encoding");
      Locking_Policy : Character;
      pragma Import (C, Locking_Policy, "__gl_locking_policy");
      Queuing_Policy : Character;
      pragma Import (C, Queuing_Policy, "__gl_queuing_policy");
      Task_Dispatching_Policy : Character;
      pragma Import (C, Task_Dispatching_Policy, "__gl_task_dispatching_policy");
      Priority_Specific_Dispatching : System.Address;
      pragma Import (C, Priority_Specific_Dispatching, "__gl_priority_specific_dispatching");
      Num_Specific_Dispatching : Integer;
      pragma Import (C, Num_Specific_Dispatching, "__gl_num_specific_dispatching");
      Main_CPU : Integer;
      pragma Import (C, Main_CPU, "__gl_main_cpu");
      Interrupt_States : System.Address;
      pragma Import (C, Interrupt_States, "__gl_interrupt_states");
      Num_Interrupt_States : Integer;
      pragma Import (C, Num_Interrupt_States, "__gl_num_interrupt_states");
      Unreserve_All_Interrupts : Integer;
      pragma Import (C, Unreserve_All_Interrupts, "__gl_unreserve_all_interrupts");
      Detect_Blocking : Integer;
      pragma Import (C, Detect_Blocking, "__gl_detect_blocking");
      Default_Stack_Size : Integer;
      pragma Import (C, Default_Stack_Size, "__gl_default_stack_size");
      Leap_Seconds_Support : Integer;
      pragma Import (C, Leap_Seconds_Support, "__gl_leap_seconds_support");

      procedure Install_Handler;
      pragma Import (C, Install_Handler, "__gnat_install_handler");

      Handler_Installed : Integer;
      pragma Import (C, Handler_Installed, "__gnat_handler_installed");

      Finalize_Library_Objects : No_Param_Proc;
      pragma Import (C, Finalize_Library_Objects, "__gnat_finalize_library_objects");
   begin
      if Is_Elaborated then
         return;
      end if;
      Is_Elaborated := True;
      Main_Priority := -1;
      Time_Slice_Value := -1;
      WC_Encoding := 'b';
      Locking_Policy := ' ';
      Queuing_Policy := ' ';
      Task_Dispatching_Policy := ' ';
      Priority_Specific_Dispatching :=
        Local_Priority_Specific_Dispatching'Address;
      Num_Specific_Dispatching := 0;
      Main_CPU := -1;
      Interrupt_States := Local_Interrupt_States'Address;
      Num_Interrupt_States := 0;
      Unreserve_All_Interrupts := 0;
      Detect_Blocking := 0;
      Default_Stack_Size := -1;
      Leap_Seconds_Support := 0;

      if Handler_Installed = 0 then
         Install_Handler;
      end if;

      if E16 = 0 then
         System.Soft_Links'Elab_Spec;
      end if;
      if E53 = 0 then
         System.Fat_Lflt'Elab_Spec;
      end if;
      E53 := E53 + 1;
      if E10 = 0 then
         System.Exception_Table'Elab_Body;
      end if;
      E10 := E10 + 1;
      if E07 = 0 then
         Ada.Numerics'Elab_Spec;
      end if;
      E07 := E07 + 1;
      if E28 = 0 then
         System.Exceptions'Elab_Spec;
      end if;
      E28 := E28 + 1;
      if E16 = 0 then
         System.Soft_Links'Elab_Body;
      end if;
      E16 := E16 + 1;
      if E20 = 0 then
         System.Secondary_Stack'Elab_Body;
      end if;
      E20 := E20 + 1;
      E50 := E50 + 1;
      E60 := E60 + 1;
      E62 := E62 + 1;
      if E05 = 0 then
         obsw'elab_body;
      end if;
      E05 := E05 + 1;
   end adainit;

--  BEGIN Object file/option list
   --   ./adaasn1rtl.o
   --   ./taste_basictypes.o
   --   ./taste_dataview.o
   --   ./obsw.o
   --   ./tasteada.o
   --   -L./
   --   -L/usr/lib/gcc/i586-linux-gnu/4.9/adalib/
   --   -shared
   --   -lgnat-4.9
--  END Object file/option list   

end ada_main;
