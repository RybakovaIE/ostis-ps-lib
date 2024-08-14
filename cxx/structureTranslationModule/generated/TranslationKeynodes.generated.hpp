#include <memory>

#include "sc-memory/sc_memory.hpp"


#include "sc-memory/sc_event.hpp"




#define TranslationKeynodes_hpp_20_init  bool _InitInternal(ScAddr const & outputStructure = ScAddr::Empty) override \
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


#define TranslationKeynodes_hpp_20_initStatic static bool _InitStaticInternal(ScAddr const & outputStructure = ScAddr::Empty)  \
{ \
    ScMemoryContext context; \
    ScSystemIdentifierQuintuple fiver; \
    bool result = true; \
	context.HelperResolveSystemIdtf("action_translate_structures_into_natural_language", ScType::NodeConstClass, fiver);action_translate_structures_into_natural_language = fiver.addr1; result = result && action_translate_structures_into_natural_language.IsValid(); if (outputStructure.IsValid()) {context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	context.HelperResolveSystemIdtf("lang_en", ScType::NodeConstClass, fiver);lang_en = fiver.addr1; result = result && lang_en.IsValid(); if (outputStructure.IsValid()) {context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	context.HelperResolveSystemIdtf("translation_ignored_keynodes", ScType::NodeConstClass, fiver);translation_ignored_keynodes = fiver.addr1; result = result && translation_ignored_keynodes.IsValid(); if (outputStructure.IsValid()) {context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
    return result; \
}\
static bool _InitStaticInternal(ScMemoryContext & context, ScAddr const & outputStructure = ScAddr::Empty)  \
{ \
    ScSystemIdentifierQuintuple fiver; \
    bool result = true; \
	context.HelperResolveSystemIdtf("action_translate_structures_into_natural_language", ScType::NodeConstClass, fiver);action_translate_structures_into_natural_language = fiver.addr1; result = result && action_translate_structures_into_natural_language.IsValid(); if (outputStructure.IsValid()) {context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	context.HelperResolveSystemIdtf("lang_en", ScType::NodeConstClass, fiver);lang_en = fiver.addr1; result = result && lang_en.IsValid(); if (outputStructure.IsValid()) {context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
	context.HelperResolveSystemIdtf("translation_ignored_keynodes", ScType::NodeConstClass, fiver);translation_ignored_keynodes = fiver.addr1; result = result && translation_ignored_keynodes.IsValid(); if (outputStructure.IsValid()) {context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr1);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr2);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr3);context.CreateEdge(ScType::EdgeAccessConstPosPerm, outputStructure, fiver.addr4);}; \
    return result; \
}


#define TranslationKeynodes_hpp_20_decl 

#define TranslationKeynodes_hpp_TranslationKeynodes_impl 

#undef ScFileID
#define ScFileID TranslationKeynodes_hpp

