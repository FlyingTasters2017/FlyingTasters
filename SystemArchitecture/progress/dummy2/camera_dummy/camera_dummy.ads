-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package camera_dummy is
    --  Provided interface "cam_clock"
    procedure cam_clock;
    pragma Export(C, cam_clock, "camera_dummy_cam_clock");
    --  Required interface "put_camera_data"
    procedure RIÜput_camera_data(camera_data: access asn1SccMyInteger);
    pragma import(C, RIÜput_camera_data, "camera_dummy_RI_put_camera_data");
end camera_dummy;