/****************************************************************************
 * Copyright (C) 2009-2015 EPAM Systems
 * 
 * This file is part of Indigo toolkit.
 * 
 * This file may be distributed and/or modified under the terms of the
 * GNU General Public License version 3 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in the
 * packaging of this file.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 ***************************************************************************/

#ifndef __mango_core_c_parallel_h___
#define __mango_core_c_parallel_h___

#include "bingo_core_c_internal.h"
#include "bingo_core_c_parallel.h"

#include "base_cpp/reusable_obj_array.h"

namespace indigo {
namespace bingo_core {

class MangoIndexingCommandResult : public IndexingCommandResult
{
public:
   virtual void clear ();
   virtual BingoIndex& getIndex (int index);

   ReusableObjArray<MangoIndex> per_molecule_index;
};

class MangoIndexingDispatcher : public IndexingDispatcher
{
public:
   MangoIndexingDispatcher (BingoCore &core);

protected:
   virtual void _exposeCurrentResult (int index, IndexingCommandResult &result);
   virtual OsCommandResult* _allocateResult  ();
};

}
}

#endif // __mango_core_c_parallel_h___
