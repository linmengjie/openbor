/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved. See LICENSE in OpenBOR root for license details.
 *
 * Copyright (c) 2004 - 2019 OpenBOR Team
 */

// Entity Properties
// 2018-04-02
// Caskey, Damon V.

typedef enum
{
    _ENTITY_AI_TARGET_ENTITY,
    _ENTITY_ANIMATION_ANIMATING,
    _ENTITY_ANIMATION_COLLECTION,
    _ENTITY_ANIMATION_FRAME,
	_ENTITY_ANIMATION_ID,
	_ENTITY_ANIMATION_TIME,
    _ENTITY_ARROW_ON,
    _ENTITY_ATTACKING,
    _ENTITY_ATTACK_ID_INCOMING,
    _ENTITY_ATTACK_ID_OUTGOING,
    _ENTITY_AUTOKILL,
    _ENTITY_BINDING,
    _ENTITY_BLINK,
    _ENTITY_BLOCKING,
    _ENTITY_BOSS,
    _ENTITY_CHARGING,
    _ENTITY_COLORSET_DEFAULT,
    _ENTITY_COLORSET_DYING_HEALTH_1,
    _ENTITY_COLORSET_DYING_HEALTH_2,
    _ENTITY_COLORSET_DYING_INDEX_1,
    _ENTITY_COLORSET_DYING_INDEX_2,
    _ENTITY_COLORSET_TABLE,
    _ENTITY_COLORSET_TIME,
    _ENTITY_COMBO_STEP,
    _ENTITY_COMBO_TIME,
	_ENTITY_COMMAND_TIME,
    _ENTITY_DAMAGE_ON_LANDING,
    _ENTITY_DEDUCT_AMMO,
	_ENTITY_DESTINATION_X,
	_ENTITY_DESTINATION_Z,
	_ENTITY_EXISTS,
	_ENTITY_FREEZE_TIME,
	_ENTITY_GUARD_TIME,
	_ENTITY_HP,
	_ENTITY_HP_OLD,
	_ENTITY_INVINCIBLE_TIME,
	_ENTITY_ITEM_DATA,
	_ENTITY_JUMP_ANIMATION_ID,
	_ENTITY_JUMP_VELOCITY_X,
	_ENTITY_JUMP_VELOCITY_Y,
	_ENTITY_JUMP_VELOCITY_Z,
	_ENTITY_KNOCKDOWN_COUNT,
	_ENTITY_KNOCKDOWN_TIME,
	_ENTITY_MODEL,
	_ENTITY_MODEL_DATA,
	_ENTITY_MODEL_DEFAULT,
	_ENTITY_MOVE_TIME,
	_ENTITY_MOVE_X,
	_ENTITY_MOVE_Z,
	_ENTITY_MP,
	_ENTITY_MP_CHARGE_TIME,
	_ENTITY_MP_OLD,
	_ENTITY_MP_TIME,
	_ENTITY_NAME,
	_ENTITY_NEXT_ATTACK_TIME,
	_ENTITY_NEXT_HIT_TIME,
	_ENTITY_NOGRAB,
	_ENTITY_NOGRAB_DEFAULT,
    _ENTITY_OPPONENT,
    _ENTITY_OWNER,
	_ENTITY_PAUSE_TIME,
    _ENTITY_PLAYER_INDEX,
	_ENTITY_POSITION_BASE,
    _ENTITY_POSITION_BASE_ALTERNATE,
    _ENTITY_POSITION_DIRECTION,
	_ENTITY_POSITION_X,
	_ENTITY_POSITION_Y,
	_ENTITY_POSITION_Z,
    _ENTITY_PROJECTILE_PRIME,
	_ENTITY_RECURSIVE_DAMAGE,
	_ENTITY_RELEASE_TIME,
	_ENTITY_RISE_ATTACK_TIME,
	_ENTITY_RISE_TIME,
	_ENTITY_SEAL_ENERGY,
	_ENTITY_SEAL_TIME,
	_ENTITY_SLEEP_TIME,
    _ENTITY_SPAWN_TYPE,
	_ENTITY_SPEED_MULTIPLIER,
	_ENTITY_STALL_TIME,
	_ENTITY_THINK_TIME,
	_ENTITY_TIMESTAMP,
	_ENTITY_TOSS_TIME,
	_ENTITY_TURN_TIME,
    _ENTITY_END,
} e_entity_properties;

HRESULT openbor_get_entity_property(ScriptVariant **varlist, ScriptVariant **pretvar, int paramCount);
HRESULT openbor_set_entity_property(ScriptVariant **varlist, ScriptVariant **pretvar, int paramCount);

int mapstrings_entity_property(ScriptVariant **varlist, int paramCount);
