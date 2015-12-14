#include "uncategorized.hpp"
#include "client\pointers.hpp"
#include "common_helpers.hpp"


using namespace intercept::types;

namespace intercept {
	namespace sqf {
		namespace __uncategorized {
			std::vector<std::string> action_keys(std::string user_action_)
			{
				game_value act_keys = host::functions.invoke_raw_unary(client::__sqf::unary__actionkeys__string__ret__array, game_value(user_action_));
				std::vector<std::string> r_arr = __helpers::__convert_to_strings_vector(act_keys);

				host::functions.free_value(&act_keys);
				return r_arr;
			}

			text action_keys_images(std::string user_action_)
			{
				return text(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysimages__string_array__ret__text, user_action_));
			}

			std::string action_keys_names(std::string user_action_)
			{
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnames__string_array__ret__string, user_action_));
			}

			std::string action_keys_names(std::string user_action_, float max_keys_)
			{
				//game_value params({
				//	user_action_,
				//	max_keys_
				//});

				//return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnames__string_array__ret__string, params));
				throw 713; // @todo
			}
			std::string action_keys_names(std::string user_action_, float max_keys_, std::string input_device_priority_)
			{
				game_value params({
					user_action_,
					max_keys_,
					input_device_priority_
				});

				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnames__string_array__ret__string, params));
			}

			std::vector<std::string> action_keys_names_array(std::string user_action_)
			{
				game_value act_keys = host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnamesarray__string_array__ret__array, game_value(user_action_));
				std::vector<std::string> r_arr = __helpers::__convert_to_strings_vector(act_keys);

				host::functions.free_value(&act_keys);
				return r_arr;
			}

			std::vector<std::string> action_keys_names_array(std::string user_action_, float max_keys_)
			{
				//game_value params({
				//	user_action_,
				//	max_keys_
				//});

				//return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnamesarray__string_array__ret__array, params));

				throw 713; // @todo
			}
			std::vector<std::string> action_keys_names_array(std::string user_action_, float max_keys_, std::string input_device_priority_)
			{
				game_value params({
					user_action_,
					max_keys_,
					input_device_priority_
				});

				return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__actionkeysnamesarray__string_array__ret__array, params));
			}

			void activate_addons(std::vector<std::string> &addons_)
			{
                std::vector<game_value> addons;
                for (auto it : addons_)
                    addons.push_back(it);

				host::functions.invoke_raw_unary(client::__sqf::unary__activateaddons__array__ret__nothing, addons);
			}

			/* potential namespace: camera */
			void add_cam_shake(float power_, float duration_, float frequency_)
			{
				//game_value params({
				//	power_,
				//	duration_,
				//	frequency_
				//});

				//host::functions.invoke_raw_unary(client::__sqf::unary__addcamshake__array__ret__nothing, params);
			}

			/* potential namespace: items, inventory, campaign */
			void add_item_pool(std::string item_name_, float item_count_)
			{
				//game_value params({
				//	item_name_,
				//	item_count_
				//});

				//host::functions.invoke_raw_unary(client::__sqf::unary__additempool__array__ret__nothing, params);
			}

			void add_magazine_pool(std::string mag_name_, float mag_count_)
			{
				//game_value params({
				//	mag_name_,
				//	mag_count_
				//});

				//host::functions.invoke_raw_unary(client::__sqf::unary__addmagazinepool__array__ret__nothing, params);
			}

			void add_to_remains_collector(std::vector<object> objects_)
			{
                std::vector<game_value> objects;
                for (auto it : objects_)
                    objects.push_back(game_value(it));
                host::functions.invoke_raw_unary(client::__sqf::unary__addtoremainscollector__array__ret__nothing, objects);
			}

			void ais_finish_heal(object wounded_, object medic_, bool medic_can_heal_)
			{
				game_value params({
					wounded_,
					medic_,
					game_value(medic_can_heal_)
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__aisfinishheal__array__ret__nothing, params);
			}

			std::vector<object> all_mission_objects(std::string type_)
			{
				return __helpers::__convert_to_objects_vector(host::functions.invoke_raw_unary(client::__sqf::unary__allmissionobjects__string__ret__array, game_value(type_)));
			}

			std::vector<object> assigned_cargo(object veh_)
			{
				return __helpers::__convert_to_objects_vector(host::functions.invoke_raw_unary(client::__sqf::unary__assignedcargo__object__ret__array, veh_));
			}

			std::vector<std::string> assigned_items(object unit_)
			{
				return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__assigneditems__object__ret__array, unit_));
			}

			object attached_object(location loc_)
			{
				return object(host::functions.invoke_raw_unary(client::__sqf::unary__attachedobject__location__ret__object, loc_));
			}

			std::vector<object> attached_objects(object obj_)
			{
				return __helpers::__convert_to_objects_vector(host::functions.invoke_raw_unary(client::__sqf::unary__attachedobjects__object__ret__array, obj_));
			}

			object attached_to(object obj_)
			{
				return object(host::functions.invoke_raw_unary(client::__sqf::unary__attachedto__object__ret__array, obj_));
			}

			bool attack_enabled(object unit_)
			{
				return __helpers::__bool_unary_object(client::__sqf::unary__attackenabled__object_group__ret__bool, unit_);
			}

			bool attack_enabled(group group_)
			{
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__attackenabled__object_group__ret__bool, group_));
			}

			std::vector<std::string> backpack_cargo(object box_)
			{
				return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__backpackcargo__object__ret__array, box_));
			}

			std::vector<std::string> backpack_items(object unit_)
			{
				return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__backpackitems__object__ret__array, unit_));
			}

			std::vector<std::string> backpack_magazines(object unit_)
			{
				return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__backpackmagazines__object__ret__array, unit_));
			}

			sqf::bounding_box bounding_box(object model_)
			{
				//game_value input = host::functions.invoke_raw_unary(client::__sqf::unary__boundingbox__object__ret__array, model_);
				//game_data_array* array_value = ((game_data_array *)input.data);

				//sqf::bounding_box bb;

				//float x_min = ((game_data_number *)((game_data_array *)array_value->data[0].data)->data[0].data)->number;
				//float y_min = ((game_data_number *)((game_data_array *)array_value->data[0].data)->data[1].data)->number;
				//float z_min = ((game_data_number *)((game_data_array *)array_value->data[0].data)->data[2].data)->number;
				//bb.min = vector3(x_min, y_min, z_min);

				//float x_max = ((game_data_number *)((game_data_array *)array_value->data[1].data)->data[0].data)->number;
				//float y_max = ((game_data_number *)((game_data_array *)array_value->data[1].data)->data[1].data)->number;
				//float z_max  = ((game_data_number *)((game_data_array *)array_value->data[1].data)->data[2].data)->number;
				//bb.min = vector3(x_max, y_max, z_max);

				//host::functions.free_value(&input);
				//return bb;
				throw 713; // @todo
			}

			sqf::bounding_box bounding_box_real(object model_)
			{
				//game_value input = host::functions.invoke_raw_unary(client::__sqf::unary__boundingboxreal__object__ret__array, model_);
				//game_data_array* array_value = ((game_data_array *)input.data);

				//sqf::bounding_box bb;

				//float x_min = ((game_data_number *)((game_data_array *)array_value->data[0].data)->data[0].data)->number;
				//float y_min = ((game_data_number *)((game_data_array *)array_value->data[0].data)->data[1].data)->number;
				//float z_min = ((game_data_number *)((game_data_array *)array_value->data[0].data)->data[2].data)->number;
				//bb.min = vector3(x_min, y_min, z_min);

				//float x_max = ((game_data_number *)((game_data_array *)array_value->data[1].data)->data[0].data)->number;
				//float y_max = ((game_data_number *)((game_data_array *)array_value->data[1].data)->data[1].data)->number;
				//float z_max = ((game_data_number *)((game_data_array *)array_value->data[1].data)->data[2].data)->number;
				//bb.min = vector3(x_max, y_max, z_max);

				//host::functions.free_value(&input);
				//return bb;
				throw 713; // @todo
			}

			vector3 bounding_center(object obj_)
			{
				return __helpers::__convert_to_vector3(host::functions.invoke_raw_unary(client::__sqf::unary__boundingcenter__object__ret__array, obj_));
			}

			void button_set_action(float control_id_, std::string code_)
			{
				game_value params({
					control_id_,
					code_
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__buttonsetaction__array__ret__nothing, params);
			}

			void button_set_action(control control_, std::string code_)
			{
				game_value params({
					control_,
					code_
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__buttonsetaction__array__ret__nothing, params);
			}

			void ctrl_enable(float control_id_, bool enable_)
			{
				//game_value params({
				//	control_id_,
				//	enable_
				//});

				//host::functions.invoke_raw_unary(client::__sqf::unary__ctrlenable__array__ret__nothing, params);
			}

			void ctrl_enable(control control_, bool enable_)
			{
				game_value params({
					control_,
					enable_
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__ctrlenable__array__ret__nothing, params);
			}

			void ctrl_set_text(float control_id_, std::string text_)
			{
				game_value params({
					control_id_,
					text_
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__ctrlsettext__array__ret__nothing, params);
			}

			void ctrl_set_text(control control_, std::string text_)
			{
				game_value params({
					control_,
					text_
				});

				host::functions.invoke_raw_unary(client::__sqf::unary__ctrlsettext__array__ret__nothing, params);
			}

			void ctrl_show(float control_id_, bool show_)
			{
				//game_value params({
				//	control_id_,
				//	show_
				//});

				//host::functions.invoke_raw_unary(client::__sqf::unary__ctrlshow__array__ret__nothing, params);
			}

			void ctrl_show(control control_, bool show_)
			{
				{
					game_value params({
						control_,
						show_
					});

					host::functions.invoke_raw_unary(client::__sqf::unary__ctrlshow__array__ret__nothing, params);
				}
			}


			// What a confusing command name.
			std::string class_name(location loc_)
			{
				return game_value( host::functions.invoke_raw_unary(client::__sqf::unary__classname__location__ret__string, loc_) );
			}

			std::string combat_mode(group grp_)
			{
				return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__combatmode__object_group__ret__string, grp_));
			}

			std::string combat_mode(object unit_)
			{
				return __helpers::__string_unary_object(client::__sqf::unary__combatmode__object_group__ret__string, unit_);
			}

			void command_get_out(object unit_)
			{
				return __helpers::__empty_unary_object(client::__sqf::unary__commandgetout__object_array__ret__nothing, unit_);
			}

			void command_get_out(std::vector<object> units_)
			{
				// @todo
				throw 713; // Not Implmemented.
				//return __helpers::__empty_unary_object(client::__sqf::unary__commandgetout__object_array__ret__nothing, unit_);
			}

			void command_stop(object unit_)
			{
				return __helpers::__empty_unary_object(client::__sqf::unary__commandstop__object_array__ret__nothing, unit_);
			}
			void command_stop(std::vector<object> units_)
			{
				// @todo
				throw 713; // Not Implmemented.
				//return __helpers::__empty_unary_object(client::__sqf::unary__commandstop__object_array__ret__nothing, unit_);
			}

			object create_agent(std::string type_, vector3 pos_, std::vector<marker> markers_ /* = {}*/, float placement_ /*= 0.0f*/, std::string special_ /*= "NONE"*/)
			{
				std::vector<game_value> markers;
				for (auto it : markers_)
					markers.push_back(game_value(it));

				game_value args({
					type_,
					pos_,
					markers,
					placement_,
					special_
				});

				return object(host::functions.invoke_raw_unary(__sqf::unary__createagent__array__ret__object, args));

			}

			void create_gear_dialog(object unit_, std::string resource_)
			{
				game_value params({
					unit_,
					resource_
				});

				host::functions.invoke_raw_unary(__sqf::unary__creategeardialog__array__ret__nothing, params);
			}

			void create_guarded_point(side side_, vector3 pos_, float idstatic_, object veh_)
			{
				game_value params({
					side_,
					(pos_),
					(idstatic_),
					veh_
				});

				host::functions.invoke_raw_unary(__sqf::unary__createguardedpoint__array__ret__nothing, params);
			}

			location create_location(std::string classname_, vector3 pos_, float size_x_, float size_y_)
			{
				game_value params({
					(classname_),
					(pos_),
					(size_x_),
					(size_y_)
				});

				return location(host::functions.invoke_raw_unary(__sqf::unary__createlocation__array__ret__location, params));
			}

			location create_location(std::string classname_, vector2 pos_, float size_x_, float size_y_)
			{
				game_value params({
					(classname_),
					(pos_),
					(size_x_),
					(size_y_)
				});

				return location(host::functions.invoke_raw_unary(__sqf::unary__createlocation__array__ret__location, params));
			}
			location create_location(std::string classname_, object obj_, float size_x_, float size_y_)
			{
				game_value params({
					(classname_),
					obj_,
					(size_x_),
					(size_y_)
				});

				return location(host::functions.invoke_raw_unary(__sqf::unary__createlocation__array__ret__location, params));
			}

			object create_mine(std::string type_, vector3 pos_, std::vector<marker> markers_/* = {}*/, float placement_/* = 0.0f*/)
			{
				std::vector<game_value> markers;
				for (auto it : markers_)
					markers.push_back(game_value(it));

				game_value args({
					type_,
					pos_,
					markers,
					placement_,
				});

				return object(host::functions.invoke_raw_unary(__sqf::unary__createmine__array__ret__object, args));
			}

			object create_sound_source(std::string type_, vector3 pos_, std::vector<marker> markers_/* = {}*/, float placement_/* = 0.0f*/)
			{
				std::vector<game_value> markers;
				for (auto it : markers_)
					markers.push_back(game_value(it));

				game_value args({
					type_,
					pos_,
					markers,
					placement_,
				});

				return object(host::functions.invoke_raw_unary(__sqf::unary__createsoundsource__array__ret__object, args));
			}

			team_member create_team(std::string type_, std::string name_)
			{
				game_value args({
					(type_),
					(name_),
				});

				return team_member(host::functions.invoke_raw_unary(__sqf::unary__createteam__array__ret__team_member, args));
			}

			object create_trigger(std::string type_, vector3 pos_, bool make_global_/* = true*/)
			{
				game_value args({
					(type_),
					(pos_),
					(make_global_)
				});

				return object(host::functions.invoke_raw_unary(__sqf::unary__createtrigger__array__ret__object, args));
			}

			object create_trigger(std::string type_, object pos_, bool make_global_ /*= true*/)
			{
				game_value args({
					(type_),
					pos_,
					(make_global_)
				});

				return object(host::functions.invoke_raw_unary(__sqf::unary__createtrigger__array__ret__object, args));
			}

			std::vector<object> crew(object _veh)
			{
				return __helpers::__convert_to_objects_vector(host::functions.invoke_raw_unary(__sqf::unary__crew__object__ret__array, _veh));
			}

			std::string current_magazine_detail(object veh_)
			{
				return __helpers::__string_unary_object(client::__sqf::unary__currentmagazinedetail__object__ret__array, veh_);
			}
			
			std::vector<task> current_tasks(team_member team_member_)
			{
				game_value input = host::functions.invoke_raw_unary(client::__sqf::unary__currenttasks__team_member__ret__array, team_member_);

				std::vector<task> output;
				for (uint32_t i = 0; i < input.length(); ++i) {
					output.push_back(task(input[i].rv_data));
				}

				return output;
			}

			void cut_obj(std::string name_, std::string type_, float speed_)
			{
				game_value args({
					(name_),
					(type_),
					(speed_)
				});

				host::functions.invoke_raw_unary(__sqf::unary__cutobj__array__ret__nothing, args);
			}

			void cut_rsc(std::string name_, std::string type_, float speed_, bool show_on_map_)
			{
				game_value args({
					(name_),
					(type_),
					(speed_),
					(show_on_map_)
				});

				host::functions.invoke_raw_unary(__sqf::unary__cutrsc__array__ret__nothing, args);
			}

			void cut_text(std::string name_, std::string type_, float speed_, bool show_on_map_)
			{
				game_value args({
					(name_),
					(type_),
					(speed_),
					(show_on_map_)
				});

				host::functions.invoke_raw_unary(__sqf::unary__cuttext__array__ret__nothing, args);
			}

			void enable_debriefing_stats(float left_, float top_, float width_, float height_)
			{
				//game_value args({
				//	(left_),
				//	(top_),
				//	(width_),
				//	(height_)
				//});

				//host::functions.invoke_raw_unary(__sqf::unary__enabledebriefingstats__array__ret__nothing, args);
			}

			void enable_saving(bool enable_)
			{
				enable_saving(enable_, !enable_);
			}

			void enable_saving(bool enable_, bool autosave_)
			{
				//game_value args({
				//	(enable_),
				//	(autosave_)
				//});

				//host::functions.invoke_raw_unary(__sqf::unary__enablesaving__bool_array__ret__nothing, args);
			}

			std::string formation(object leader_)
			{
				return game_value(host::functions.invoke_raw_unary(__sqf::unary__formation__object_group__ret__string, leader_));
			}

			std::string formation(group group_)
			{
				return game_value(host::functions.invoke_raw_unary(__sqf::unary__formation__object_group__ret__string, group_));
			}

			std::vector<object> formation_members(object unit_)
			{
				return __helpers::__convert_to_objects_vector(host::functions.invoke_raw_unary(__sqf::unary__formationmembers__object__ret__array, unit_));
			}

			vector3 formation_position(object unit_)
			{
				return __helpers::__convert_to_vector3(host::functions.invoke_raw_unary(__sqf::unary__formationposition__object__ret__array, unit_));
			}

			std::vector<rv_crew_member> full_crew(object veh_, const std::string & filter_)
			{
				//game_value crew_list;

				//if (filter_ == "")
				//{
				//	crew_list = host::functions.invoke_raw_unary(__sqf::unary__fullcrew__object__ret__array, veh_);
				//}
				//else
				//{
				//	game_value args({
				//		veh_,
				//		(filter_)
				//	});

				//	crew_list = host::functions.invoke_raw_unary(__sqf::unary__fullcrew__array__ret__array, args);
				//}

				//game_data_array* gd_array = ((game_data_array *)crew_list.data);
				//std::vector<rv_crew_member> output;
				//for (uint32_t i = 0; i < gd_array->length; ++i) {

				//	rv_crew_member crew_m;

				//	crew_m.unit = object(((game_data_array *)gd_array->data[i].data)->data[0]);
				//	crew_m.role = ((game_data_string *)((game_data_array *)gd_array->data[i].data)->data[1].data)->get_string();
				//	crew_m.cargo_index = ((game_data_number *)((game_data_array *)gd_array->data[i].data)->data[2].data)->number;
				//	// Turret path
				//	crew_m.person_turret = ((game_data_bool *)((game_data_array *)gd_array->data[i].data)->data[4].data)->value;
				//	output.push_back(crew_m);
				//}

				//host::functions.free_value(&crew_list);
				//return output;

				throw 713; // @todo
			}

			std::vector<std::string> get_artillery_ammo(const std::vector<object>& units_)
			{
				std::vector<game_value> units;
				for (auto it : units_)
					units.push_back(game_value(it));

				return __helpers::__convert_to_strings_vector(host::functions.invoke_raw_unary(client::__sqf::unary__getartilleryammo__array__ret__array, units));
			}

			vector3 get_center_of_mass(object obj_)
			{

				return __helpers::__convert_to_vector3(host::functions.invoke_raw_unary(client::__sqf::unary__getcenterofmass__object__ret__array, obj_));
				//game_value function_return_array = host::functions.invoke_raw_unary(client::__sqf::unary__getcenterofmass__object__ret__array, obj_);
				//float x = ((game_data_number *)((game_data_array *)function_return_array.data)->data[0].data)->number;
				//float y = ((game_data_number *)((game_data_array *)function_return_array.data)->data[1].data)->number;
				//float z = ((game_data_number *)((game_data_array *)function_return_array.data)->data[2].data)->number;
				//host::functions.free_value(&function_return_array);
				//return vector3(x, y, z);
			}

			std::vector<float> get_dlcs(float filter_)
			{
				return __helpers::__convert_to_numbers_vector(host::functions.invoke_raw_unary(client::__sqf::unary__getdlcs__scalar__ret__array, filter_));
			}
		}
	}
}
