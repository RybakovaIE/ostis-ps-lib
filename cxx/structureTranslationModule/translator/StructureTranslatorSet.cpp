#include "StructureTranslatorSet.hpp"

#include "NrelInLinkTranslator.hpp"
#include "NrelInQuasybinaryLinkTranslator.hpp"
#include "NrelInQuasybinaryNodeTranslator.hpp"
#include "NrelFromQuasybinaryNodeTranslator.hpp"
#include "FromConceptTranslator.hpp"
#include "NrelFromNodeTranslator.hpp"
#include "NrelFromQuasybinaryLinkTranslator.hpp"

namespace structureTranslationModule
{
StructureTranslatorSet::StructureTranslatorSet(ScMemoryContext * context)
  : handlers(
      {new NrelInLinkTranslator(context),
       new NrelInQuasybinaryLinkTranslator(context),
       new NrelInQuasybinaryNodeTranslator(context),
       new NrelFromQuasybinaryNodeTranslator(context),
       new FromConceptTranslator(context),
       new NrelFromNodeTranslator(context),
       new NrelFromQuasybinaryLinkTranslator(context)})
{
}

StructureTranslatorSet::~StructureTranslatorSet()
{
  for (auto const & handler : handlers)
    delete handler;
}

std::vector<std::string> StructureTranslatorSet::translate(ScAddr structAddr) const
{
  std::vector<std::string> answer;
  for (auto const & handler : handlers)
  {
    auto translations = handler->translate(structAddr);
    answer.insert(answer.cend(), translations.cbegin(), translations.cend());
  }
  return answer;
}
}  // namespace structureTranslationModule
