#ifndef ARRAYID_H_
#define ARRAYID_H_
/*
**
* BEGIN_COPYRIGHT
*
* Copyright (C) 2008-2019 SciDB, Inc.
* All Rights Reserved.
*
* SciDB is free software: you can redistribute it and/or modify
* it under the terms of the AFFERO GNU General Public License as published by
* the Free Software Foundation.
*
* SciDB is distributed "AS-IS" AND WITHOUT ANY WARRANTY OF ANY KIND,
* INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY,
* NON-INFRINGEMENT, OR FITNESS FOR A PARTICULAR PURPOSE. See
* the AFFERO GNU General Public License for the complete license terms.
*
* You should have received a copy of the AFFERO GNU General Public License
* along with SciDB.  If not, see <http://www.gnu.org/licenses/agpl-3.0.html>
*
* END_COPYRIGHT
*/
#include <cstdint>

namespace scidb {
/**
 * Array identifier
 */
typedef uint64_t ArrayID;

/**
 * Unversioned Array identifier
 */
typedef uint64_t ArrayUAID;

const ArrayID     INVALID_ARRAY_ID      = 0UL;

}  // namespace scidb
#endif
