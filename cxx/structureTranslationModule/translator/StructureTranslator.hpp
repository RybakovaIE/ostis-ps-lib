/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#pragma once

#include "sc-memory/sc_memory.hpp"
#include "sc-memory/sc_addr.hpp"

namespace structureTranslationModule
{
using ScAddrSet = std::unordered_set<ScAddr, ScAddrHashFunc<uint32_t>>;

class StructureTranslator
{
public:
  explicit StructureTranslator(ScMemoryContext * context)
    : context(context)
  {
  }

  virtual std::string translate(ScAddr const & structAddr)
      const = 0;

  size_t hashCode() const;

  bool operator<(StructureTranslator const & other) const;

protected:
  ScMemoryContext * context;

  std::string getEnglishContent(ScAddr const & linkNode) const;

  bool isInStructure(ScAddr const & structAddr, ScAddr const & elementAddr) const;


private:
  ScIterator5Ptr getNrelMainIdtfIterator(ScAddr const & node) const;

  bool isEnglish(ScAddr const & node) const;
};

struct StructureTranslatorCmp
{
  bool operator()(StructureTranslator * first, StructureTranslator * second) const
  {
    return *first < *second;
  }
};

}  // namespace structureTranslationModule
