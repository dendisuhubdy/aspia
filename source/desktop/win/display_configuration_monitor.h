//
// Aspia Project
// Copyright (C) 2020 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef DESKTOP__WIN__DISPLAY_CONFIGURATION_MONITOR_H
#define DESKTOP__WIN__DISPLAY_CONFIGURATION_MONITOR_H

#include "desktop/geometry.h"

namespace desktop {

// A passive monitor to detect the change of display configuration on a Windows system.
// TODO(zijiehe): Also check for pixel format changes.
class DisplayConfigurationMonitor
{
public:
    // Checks whether the change of display configuration has happened after last
    // isChanged() call. This function won't return true for the first time after
    // constructor or reset() call.
    bool isChanged();

    // Resets to the initial state.
    void reset();

private:
    Rect rect_;
    bool initialized_ = false;
};

} // namespace desktop

#endif // DESKTOP__WIN__DISPLAY_CONFIGURATION_MONITOR_H
