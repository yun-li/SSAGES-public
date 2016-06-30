#include "Method.h"
#include "../CVs/CollectiveVariable.h"

namespace SSAGES
{
    //! Swarm of Trajectories String Method
    /*!
     * \ingroup Methods
     *
     * Implementation of the swarm of trajectories string method.
     */
    class Swarm : public Method //Calls Method constructor first, then Swarm constructor
    {
        private:

            //! Number of iterations run so far
            unsigned int _currentiter;

            //! The computational node this image belongs to
            unsigned int _mpiid;

            //! Number of nodes on a string
            unsigned int _numnodes;
    }
}
