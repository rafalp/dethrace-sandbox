#ifndef _GLOBVARS_H_
#define _GLOBVARS_H_

#include "brender/br_types.h"
#include "dr_types.h"

extern int gTyping;
extern int gArrow_mode;
extern int gInfo_on;
extern int gHost_abandon_game;
extern int gRecover_car;
extern int gDisallow_abandon_race;
extern int gPipe_reg_snap_before_new_game;
extern int gPipe_reg_snap_before_our_car;
extern int gPipe_reg_snap_after_our_car;
extern int gAction_replay_mode;
extern int gDefault_engine_noise_index;
extern int gAusterity_mode;
extern int gSausage_override;
extern int gAustere_override;
extern int gBrits_override;
extern int gSound_override;
extern int gKey_map_index;
extern int gInterface_within_race_mode;
extern int gCut_scene_override;
extern int gGame_to_load;
extern int gCD_is_in_drive;
extern int gExtra_time;
extern int gEndless_mode;
extern int gPinball_mode;
extern int gJupiter_mode;
extern int gGT_mode;
extern int gShow_peds_mode;
extern int gShow_pups_mode;
extern int gShow_cops_mode;
extern int gOpponent_respawn;
extern int gLonger_pups;
extern int gDisable_electric_blue;
extern int gPlayer_electro_bastard;
extern int gPlayer_solid_granite;
extern int gPlayer_jelly_suspension;
extern br_pixelmap* gRearview_screen;
extern br_scalar gCut_delay_1;
extern br_scalar gCut_delay_2;
extern br_scalar gCut_delay_3;
extern br_scalar gCut_delay_4;
extern br_scalar gYon_multiplier;
extern tSave_game* gPre_race_saved_game;
extern FILE* gDiagnostic_file;
extern br_vector3 gDisabled_vector;
extern tU32 gI_am_cheating;
extern char gNet_player_name[32];
extern br_matrix34 gRearview_camera_to_world;
extern tSpecial_volume gDefault_default_water_spec_vol;
extern br_matrix34 gCamera_to_world;
extern tRace_list_spec gRace_list[100];
extern tPath_name gApplication_path;
extern float gPinball_factor;
extern float gOpponent_speed_factor;
extern float gCar_crush_min_fold;
extern float gNet_recovery_cost[7];
extern float gCar_crush_softness;
extern br_vector3* gOur_pos;
extern float gCar_crush_max_fold;
extern tBrender_storage gNet_cars_storage_space;
extern float gNet_softness[7];
extern tS32 gJoystick_deadzone;
extern float gCar_crush_limit_deviant;
extern float gNet_offensive[7];
extern float gCar_crush_split_chance;
extern float gGravity_multiplier;
extern float gCar_crush_wibble;
extern float gRepair_cost[3];
extern float gCop_speed_factor;
extern float gDefault_gravity;
extern tU32 gKeys_pressed;
extern tSpecial_volume* gDefault_water_spec_vol;
extern float gNet_repair_cost[7];
extern br_font* gFont_7;
extern tU32 gLast_replay_frame_time;
extern tU32 gTag_start_time;
extern tOpponent* gOpponents;
extern tU32 gLast_credit_tick;
extern tBrender_storage gTheir_cars_storage_space;
extern br_font* gHeadup_font;
extern tU32 gRace_finished;
extern tU32 gFrame_start_time;
extern tProgram_state gProgram_state;
extern tU32 gCredit_period_single[3];
extern tU32 gRace_start;
extern tBrender_storage gTrack_storage_space;
extern tU32 gFrame_period;
extern tU32 gCredit_period;
extern tU32 gCredit_period_network[7];
extern tBrender_storage gOur_car_storage_space;
extern tU32 gFox_start_time;
extern br_font* gBig_font;
extern tBrender_storage gPedestrians_storage_space;
extern tRace_info gCurrent_race;
extern br_actor* gSelf;
extern br_actor* gDont_render_actor;
extern br_pixelmap* gScreen;
extern br_pixelmap* gRender_screen;
extern br_actor* gRearview_camera;
extern br_scalar gCamera_hither;
extern br_pixelmap* gBack_screen;
extern br_scalar gCamera_angle;
extern br_pixelmap* gDigits_pix;
extern br_pixelmap* gRender_shade_table;
extern br_pixelmap* gRearview_depth_buffer;
extern br_pixelmap* gWhole_screen;
extern br_pixelmap* gIcons_pix;
extern br_scalar gCamera_yon;
extern br_actor* gCamera;
extern br_actor* gArrow_actor;
extern br_pixelmap* gIcons_pix_low_res;
extern br_pixelmap* gDepth_buffer;
extern int gInitial_net_credits[5];
extern float gCar_cred_value[3];
extern int gNo_races_yet;
extern int gJump_start_fine[3];
extern int gReal_graf_data_index;
extern float gCar_time_value[3];
extern int gTyping_slot;
extern int gCunning_stunt_bonus[3];
extern int gKnobbled_frame_period;
extern br_actor* gNon_track_actor;
extern int gWait_for_it;
extern int gCheck_point_cash[3];
extern int gPoints_per_second[3];
extern br_actor* gUniverse_actor;
extern br_actor* gTrack_actor;
extern int gMap_mode;
extern int gPed_time_value[3];
extern int gAbandon_game;
extern int gLap;
extern int gShow_opponents;
extern int gTotal_laps;
extern int gFree_repairs;
extern int gFreeze_timer;
extern int gRoll_over_creds[3];
extern int gShow_peds_on_map;
extern int gOn_drugs;
extern int gWasted_time[3];
extern int gCheckpoint;
extern int gRoll_over_time[3];
extern int gWasted_creds[3];
extern int gTimer;
extern int gCheckpoint_count;
extern int gCountdown;
extern int gFrame_rate;
extern int gNumber_of_racers;
extern int gSound_enabled;
extern int gGraf_spec_index;
extern int gSound_available;
extern int gNumber_of_races;
extern char gDir_separator[3];

#endif
