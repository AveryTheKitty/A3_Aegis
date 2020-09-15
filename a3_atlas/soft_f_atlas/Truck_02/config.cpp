#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Truck_F;
	class Truck_02_base_F: Truck_F
	{
		class Turrets;
	};
	class Truck_02_transport_base_F;
	class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
	// Arma 3 Aegis
	class Truck_02_cargo_base_F;
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // CSAT (Woodland)
	#include "cfgOpfor_Atlas.hpp"       // CSAT (Takistani)
    /*
	#include "cfgHIMF.hpp"              // HIMF
	#include "cfgCDF.hpp"               // CDF
    */
};