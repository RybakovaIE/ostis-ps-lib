#include <memory>

#include "sc-memory/sc_memory.hpp"


#include "sc-memory/sc_event.hpp"




#define structureTranslationModule_hpp_20_init  bool _InitInternal(ScAddr const & outputStructure = ScAddr::Empty) override \
{ \
    ScMemoryContext context; \
    ScSystemIdentifierQuintuple fiver; \
    bool result = true; \
    return result; \
}\
 bool _InitInternal(ScMemoryContext & context, ScAddr const & outputStructure = ScAddr::Empty) override \
{ \
    ScSystemIdentifierQuintuple fiver; \
    bool result = true; \
    return result; \
}


#define structureTranslationModule_hpp_20_initStatic static bool _InitStaticInternal(ScAddr const & outputStructure = ScAddr::Empty)  \
{ \
    ScMemoryContext context; \
    ScSystemIdentifierQuintuple fiver; \
    bool result = true; \
    return result; \
}\
static bool _InitStaticInternal(ScMemoryContext & context, ScAddr const & outputStructure = ScAddr::Empty)  \
{ \
    ScSystemIdentifierQuintuple fiver; \
    bool result = true; \
    return result; \
}


#define structureTranslationModule_hpp_20_decl \
public:\
	sc_result InitializeGenerated()\
	{\
		return InitializeImpl();\
	}\
	sc_result ShutdownGenerated()\
	{\
		return ShutdownImpl();\
	}\
	sc_uint32 GetLoadPriorityGenerated()\
	{\
		return 100;\
	}

#define structureTranslationModule_hpp_structureTranslationModule_impl 

#undef ScFileID
#define ScFileID structureTranslationModule_hpp

