#include <memory>

#include "sc-memory/sc_memory.hpp"


#include "sc-memory/sc_event.hpp"




#define StructureTranslationAgent_hpp_24_init  bool _InitInternal(ScAddr const & outputStructure = ScAddr::Empty) override \
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


#define StructureTranslationAgent_hpp_24_initStatic static bool _InitStaticInternal(ScAddr const & outputStructure = ScAddr::Empty)  \
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


#define StructureTranslationAgent_hpp_24_decl \
private:\
	typedef ScAgent Super;\
protected: \
	StructureTranslationAgent(ScAddr const & userAddr) : Super(userAddr) {}\
	virtual sc_result Run(ScAddr const & listenAddr, ScAddr const & edgeAddr, ScAddr const & otherAddr) override; \
private:\
	static std::unique_ptr<ScEvent> ms_event;\
public: \
	static bool handler_emit(ScAddr const & userAddr, ScAddr const & addr, ScAddr const & edgeAddr, ScType const & edgeType, ScAddr const & otherAddr)\
	{\
		StructureTranslationAgent Instance(userAddr);\
		return Instance.Run(addr, edgeAddr, otherAddr) == SC_RESULT_OK;\
	}\
	static void RegisterHandler()\
	{\
		ScMemoryContext ms_context;\
		ms_event.reset(new ScEvent(ms_context, scAgentsCommon::CoreKeynodes::question_initiated, ScEvent::Type::AddOutputEdge, &StructureTranslationAgent::handler_emit));\
        if (ms_event.get())\
        {\
            SC_LOG_INFO("Register agent StructureTranslationAgent");\
        }\
        else\
        {\
            SC_LOG_ERROR("Can't register agent StructureTranslationAgent");\
        }\
	}\
	static void UnregisterHandler()\
	{\
		ms_event.reset();\
	}

#define StructureTranslationAgent_hpp_StructureTranslationAgent_impl \
std::unique_ptr<ScEvent> StructureTranslationAgent::ms_event;

#undef ScFileID
#define ScFileID StructureTranslationAgent_hpp

