#pragma once

#include "sc-memory/kpm/sc_agent.hpp"
#include "sc-agents-common/keynodes/coreKeynodes.hpp"

#include "QuestionFinishedSuccessfullyTestAgent.generated.hpp"

namespace nonAtomicActionInterpreterModuleTest
{
class QuestionFinishedSuccessfullyTestAgent : public ScAgent
{
  SC_CLASS(Agent, Event(scAgentsCommon::CoreKeynodes::question_initiated, ScEvent::Type::AddOutputEdge))
  SC_GENERATED_BODY()
};

}  // namespace nonAtomicActionInterpreterModuleTest
