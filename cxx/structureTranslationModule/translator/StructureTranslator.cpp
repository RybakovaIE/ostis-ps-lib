/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "sc-agents-common/utils/CommonUtils.hpp"

#include "sc-agents-common/keynodes/coreKeynodes.hpp"
#include "keynodes/TranslationKeynodes.hpp"

#include "StructureTranslator.hpp"

namespace structureTranslationModule
{

size_t StructureTranslator::hashCode() const
{
  return std::hash<std::string>()(typeid(*this).name());
}

bool StructureTranslator::operator<(StructureTranslator const & other) const
{
  return this->hashCode() < other.hashCode();
}

bool StructureTranslator::isInStructure(ScAddr const & structAddr, ScAddr const & elementAddr) const
{
  return elementAddr == structAddr or (context->GetElementType(elementAddr) == ScType::EdgeAccessConstPosPerm and context->GetEdgeSource(elementAddr) == structAddr) or context->HelperCheckEdge(structAddr, elementAddr, ScType::EdgeAccessConstPosPerm);
}

ScIterator5Ptr StructureTranslator::getNrelMainIdtfIterator(ScAddr const & node) const
{
  return context->Iterator5(
      node,
      ScType::EdgeDCommonConst,
      ScType::LinkConst,
      ScType::EdgeAccessConstPosPerm,
      scAgentsCommon::CoreKeynodes::nrel_main_idtf);
}

}  // namespace structureTranslationModule
