/**
 * @file 	electro_physiology.cpp
 * @author 	Chi Zhang and Xiangyu Hu
 * @version 0.2.1
 */

#include "electro_physiology.h"

using namespace SimTK;

namespace SPH
{
	namespace electro_physiology
	{
		//=================================================================================================//
		ElectroPhysiologyInitialCondition::
			ElectroPhysiologyInitialCondition(SolidBody* body) :
			ParticleDynamicsSimple(body),
			ElectroPhysiologyDataDelegateSimple(body),
			pos_n_(particles_->pos_n_), species_n_(particles_->species_n_)
		{
		}
		//=================================================================================================//
	}
}