/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

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

std::string StructureTranslatorSet::translate(ScAddr structAddr) const
{
  std::string answer;
  for (auto const & handler : handlers)
  {
    std::string translations = handler->translate(structAddr);
    answer += translations + "\n";
  }
  return answer;
}
}  // namespace structureTranslationModule
