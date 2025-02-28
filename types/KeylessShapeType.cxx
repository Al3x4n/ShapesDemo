// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file KeylessShapeType.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "KeylessShapeType.h"

#if FASTCDR_VERSION_MAJOR > 1

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


namespace shapes_demo_typesupport {

namespace idl {



KeylessShapeType::KeylessShapeType()
{
}

KeylessShapeType::~KeylessShapeType()
{
}

KeylessShapeType::KeylessShapeType(
        const KeylessShapeType& x)
{
    m_color = x.m_color;
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
}

KeylessShapeType::KeylessShapeType(
        KeylessShapeType&& x) noexcept
{
    m_color = std::move(x.m_color);
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
}

KeylessShapeType& KeylessShapeType::operator =(
        const KeylessShapeType& x)
{

    m_color = x.m_color;
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
    return *this;
}

KeylessShapeType& KeylessShapeType::operator =(
        KeylessShapeType&& x) noexcept
{

    m_color = std::move(x.m_color);
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
    return *this;
}

bool KeylessShapeType::operator ==(
        const KeylessShapeType& x) const
{
    return (m_color == x.m_color &&
           m_x == x.m_x &&
           m_y == x.m_y &&
           m_shapesize == x.m_shapesize);
}

bool KeylessShapeType::operator !=(
        const KeylessShapeType& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member color
 * @param _color New value to be copied in member color
 */
void KeylessShapeType::color(
        const std::string& _color)
{
    m_color = _color;
}

/*!
 * @brief This function moves the value in member color
 * @param _color New value to be moved in member color
 */
void KeylessShapeType::color(
        std::string&& _color)
{
    m_color = std::move(_color);
}

/*!
 * @brief This function returns a constant reference to member color
 * @return Constant reference to member color
 */
const std::string& KeylessShapeType::color() const
{
    return m_color;
}

/*!
 * @brief This function returns a reference to member color
 * @return Reference to member color
 */
std::string& KeylessShapeType::color()
{
    return m_color;
}


/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void KeylessShapeType::x(
        int32_t _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
int32_t KeylessShapeType::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
int32_t& KeylessShapeType::x()
{
    return m_x;
}


/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void KeylessShapeType::y(
        int32_t _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
int32_t KeylessShapeType::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
int32_t& KeylessShapeType::y()
{
    return m_y;
}


/*!
 * @brief This function sets a value in member shapesize
 * @param _shapesize New value for member shapesize
 */
void KeylessShapeType::shapesize(
        int32_t _shapesize)
{
    m_shapesize = _shapesize;
}

/*!
 * @brief This function returns the value of member shapesize
 * @return Value of member shapesize
 */
int32_t KeylessShapeType::shapesize() const
{
    return m_shapesize;
}

/*!
 * @brief This function returns a reference to member shapesize
 * @return Reference to member shapesize
 */
int32_t& KeylessShapeType::shapesize()
{
    return m_shapesize;
}




} // namespace idl


} // namespace shapes_demo_typesupport
// Include auxiliary functions like for serializing/deserializing.
#include "KeylessShapeTypeCdrAux.ipp"

#endif // FASTCDR_VERSION_MAJOR > 1
