/**
 ******************************************************************************
 *
 * @file       codegeneration.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 *             Parts by Nokia Corporation (qt-info@nokia.com) Copyright (C) 2009.
 * @brief      
 * @see        The GNU Public License (GPL) Version 3
 * @defgroup   
 * @{
 * 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef CODEGENERATION_H
#define CODEGENERATION_H

#include "utils_global.h"
#include <QString>

QT_BEGIN_NAMESPACE
class QTextStream;
class QStringList;
QT_END_NAMESPACE

namespace Utils {

// Convert a file name to a Cpp identifier (stripping invalid characters
// or replacing them by an underscore).
QTCREATOR_UTILS_EXPORT QString fileNameToCppIdentifier(const QString &s);

QTCREATOR_UTILS_EXPORT QString headerGuard(const QString &file);

QTCREATOR_UTILS_EXPORT
void writeIncludeFileDirective(const QString &file,
                               bool globalInclude,
                               QTextStream &str);

// Write opening namespaces and return an indentation string to be used
// in the following code if there are any.
QTCREATOR_UTILS_EXPORT
QString writeOpeningNameSpaces(const QStringList &namespaces,
                               const QString &indent,
                               QTextStream &str);

// Close namespacesnamespaces
QTCREATOR_UTILS_EXPORT
void writeClosingNameSpaces(const QStringList &namespaces,
                            const QString &indent,
                            QTextStream &str);

} // namespace Utils

#endif // CODEGENERATION_H
