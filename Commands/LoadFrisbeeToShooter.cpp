#include "LoadFrisbeeToShooter.h"
#include "SetStackState.h"

LoadFrisbeeToShooter::LoadFrisbeeToShooter(){
   AddSequential(new SetStackState(false, true));
   AddSequential(new WaitCommand(WAIT_TIME));
   AddSequential(new SetStackState(true, true));
   AddSequential(new WaitCommand(WAIT_TIME));
   AddSequential(new SetStackState(true, false));
}
