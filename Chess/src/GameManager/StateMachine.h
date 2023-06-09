#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <memory>
#include <stack>
#include "GameState.h"

class StateMachine {
    public:
      StateMachine();
      ~StateMachine();
      void AddState(GameState *newState, bool isReplacing = true);

      GameState *GetActiveState();
      void clear();

    private:


        std::stack<GameState *> _states;
    };


#endif // STATEMACHINE_H
