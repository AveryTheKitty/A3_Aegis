#define EXPLOSION_REFRACT(a) \
	class RefractExp \
	{ \
		simulation = particles; \
		type = ##a##; \
		position[] = {0,0,0}; \
		intensity = 1; \
		interval = 3*1; \
		lifeTime = 1.0; \
	};

// Arma 3
// Explosion refractions, originally by Taro with some minor edits
class IEDMineBigExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class IEDMineSmallExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class SencondaryExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineNondirectionalExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineNondirectionalExplosionSmall
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineUnderwaterExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineUnderwaterABExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class MineUnderwaterPDMExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class GrenadeExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MortarExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class ExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class BasicAmmoExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATMissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class AAMissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATMineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class BoundingMineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class DirectionalMineExplosion 
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class DirectionalMineExplosionBig
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class ATRocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class HERocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class HEShellExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ArtyShellExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class BombExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class HeavyBombExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractHuge)
};
class MissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class HelicopterExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class HelicopterExplosionEffects2
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class VehicleExplosionEffectsBig
{
    EXPLOSION_REFRACT(ExplosionRefractHuge)
};
class VehicleExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class RocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ExploAmmoExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ExploAmmoExplosionPlaneCAS
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};