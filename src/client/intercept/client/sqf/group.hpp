#pragma once
#include "shared.hpp"
#include "client\client.hpp"
#include "shared\client_types.hpp"

using namespace intercept::types;

namespace intercept {
    namespace sqf {
		namespace groups {
			bool group_icon_selectable();
			std::array<bool, 2> group_icons_visible();
			group grp_null();
			void clear_group_icons(group value_);
			group create_group(side value_);
			void delete_group(group value_);

			group group_from_net_id(const std::string &value_);
			std::string group_id(group value_);
			float group_owner(group value_);
			bool set_group_owner(float value0_, group value1_);

			object leader(group value_);
			void group_radio(const object &value0_, const std::string& value1_);
			void remove_group_icon(float value0_, group value1_);
			void select_leader(const object &value0_, group value1_);
			void set_group_icons_selectable(bool value_);
		}
    }
}
