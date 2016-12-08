/**

Copyright (C) 2016, Allgeyer Tobias, Hutmacher Robin, Meißner Pascal

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


#include "rotation_axis.h"

namespace descriptor_surface_based_recognition {

RotationAxis::RotationAxis(double angle, Eigen::Vector3d axis) : angle_(angle), axis_(axis) { }


double RotationAxis::getAngle() const { return angle_; }

Eigen::Vector3d RotationAxis::getAxis() const { return axis_; }

}
