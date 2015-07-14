/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2015, Daniel Roux, EPSITEC SA & TerranovaTeam
 * http://epsiteс.ch; http://colobot.info; http://github.com/colobot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://gnu.org/licenses
 */

#include "object/old_object_interface.h"


void COldObjectInterface::Simplify()
{
    throw std::logic_error("Simplify: not implemented!");
}

bool COldObjectInterface::ExplodeObject(ExplosionType type, float force, float decay)
{
    throw std::logic_error("ExplodeObject: not implemented!");
}

void COldObjectInterface::DeletePart(int part)
{
    throw std::logic_error("DeletePart: not implemented!");
}

int COldObjectInterface::GetObjectRank(int part)
{
    throw std::logic_error("GetObjectRank: not implemented!");
}

void COldObjectInterface::SetType(ObjectType type)
{
    throw std::logic_error("SetType: not implemented!");
}

int COldObjectInterface::GetOption()
{
    throw std::logic_error("GetOption: not implemented!");
}

void COldObjectInterface::SetDrawFront(bool bDraw)
{
    throw std::logic_error("SetDrawFront: not implemented!");
}

float COldObjectInterface::GetShieldRadius()
{
    throw std::logic_error("GetShieldRadius: not implemented!");
}


void COldObjectInterface::FloorAdjust()
{
    throw std::logic_error("FloorAdjust: not implemented!");
}


void COldObjectInterface::SetLinVibration(Math::Vector dir)
{
    throw std::logic_error("SetLinVibration: not implemented!");
}

void COldObjectInterface::SetCirVibration(Math::Vector dir)
{
    throw std::logic_error("SetCirVibration: not implemented!");
}

Math::Vector COldObjectInterface::GetTilt()
{
    throw std::logic_error("GetTilt: not implemented!");
}

void COldObjectInterface::SetTrainer(bool bEnable)
{
    throw std::logic_error("SetTrainer: not implemented!");
}

bool COldObjectInterface::GetTrainer()
{
    throw std::logic_error("GetTrainer: not implemented!");
}

void COldObjectInterface::SetMasterParticle(int part, int parti)
{
    throw std::logic_error("SetMasterParticle: not implemented!");
}

float COldObjectInterface::GetCmdLine(unsigned int rank)
{
    throw std::logic_error("GetCmdLine: not implemented!");
}

Math::Matrix* COldObjectInterface::GetWorldMatrix(int part)
{
    throw std::logic_error("GetWorldMatrix: not implemented!");
}

void COldObjectInterface::SetViewFromHere(Math::Vector &eye, float &dirH, float &dirV,
                                Math::Vector &lookat, Math::Vector &upVec,
                                Gfx::CameraType type)
{
    throw std::logic_error("SetViewFromHere: not implemented!");
}

Character* COldObjectInterface::GetCharacter()
{
    throw std::logic_error("GetCharacter: not implemented!");
}

void COldObjectInterface::SetEnergy(float level)
{
    throw std::logic_error("SetEnergy: not implemented!");
}

float COldObjectInterface::GetEnergy()
{
    throw std::logic_error("GetEnergy: not implemented!");
}


float COldObjectInterface::GetCapacity()
{
    throw std::logic_error("GetCapacity: not implemented!");
}

void COldObjectInterface::SetShield(float level)
{
    throw std::logic_error("SetShield: not implemented!");
}

float COldObjectInterface::GetShield()
{
    throw std::logic_error("GetShield: not implemented!");
}


void COldObjectInterface::SetRange(float delay)
{
    throw std::logic_error("SetRange: not implemented!");
}

float COldObjectInterface::GetRange()
{
    throw std::logic_error("GetRange: not implemented!");
}

void COldObjectInterface::SetFixed(bool bFixed)
{
    throw std::logic_error("SetFixed: not implemented!");
}

bool COldObjectInterface::GetFixed()
{
    throw std::logic_error("GetFixed: not implemented!");
}


void COldObjectInterface::SetClip(bool bClip)
{
    throw std::logic_error("SetClip: not implemented!");
}

bool COldObjectInterface::GetClip()
{
    throw std::logic_error("GetClip: not implemented!");
}
void COldObjectInterface::SetTeam(int team)
{
    throw std::logic_error("SetTeam: not implemented!");
}

int COldObjectInterface::GetTeam()
{
    throw std::logic_error("GetTeam: not implemented!");
}

void COldObjectInterface::StartDetectEffect(CObject *target, bool bFound)
{
    throw std::logic_error("StartDetectEffect: not implemented!");
}

void COldObjectInterface::SetVirusMode(bool bEnable)
{
    throw std::logic_error("SetVirusMode: not implemented!");
}

bool COldObjectInterface::GetVirusMode()
{
    throw std::logic_error("GetVirusMode: not implemented!");
}

void COldObjectInterface::SetCameraType(Gfx::CameraType type)
{
    throw std::logic_error("SetCameraType: not implemented!");
}

Gfx::CameraType COldObjectInterface::GetCameraType()
{
    throw std::logic_error("GetCameraType: not implemented!");
}

void COldObjectInterface::SetCameraDist(float dist)
{
    throw std::logic_error("SetCameraDist: not implemented!");
}

float COldObjectInterface::GetCameraDist()
{
    throw std::logic_error("GetCameraDist: not implemented!");
}

void COldObjectInterface::SetCameraLock(bool bLock)
{
    throw std::logic_error("SetCameraLock: not implemented!");
}

bool COldObjectInterface::GetCameraLock()
{
    throw std::logic_error("GetCameraLock: not implemented!");
}


void COldObjectInterface::SetHighlight(bool mode)
{
    // TODO: temporary hack
    return;
    //throw std::logic_error("SetHighlight: not implemented!");
}


void COldObjectInterface::SetSelect(bool bMode, bool bDisplayError)
{
    // TODO: temporary hack
    //throw std::logic_error("SetSelect: not implemented!");
}

bool COldObjectInterface::GetSelect(bool bReal)
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("GetSelect: not implemented!");
}

bool COldObjectInterface::GetSelectable()
{
    throw std::logic_error("GetSelectable: not implemented!");
}

void COldObjectInterface::SetActivity(bool bMode)
{
    throw std::logic_error("SetActivity: not implemented!");
}

bool COldObjectInterface::GetActivity()
{
    throw std::logic_error("GetActivity: not implemented!");
}


void COldObjectInterface::SetEnable(bool bEnable)
{
    throw std::logic_error("SetEnable: not implemented!");
}

bool COldObjectInterface::GetEnable()
{
    // TODO: temporary hack
    return true;
    //throw std::logic_error("GetEnable: not implemented!");
}


void COldObjectInterface::SetProxyActivate(bool bActivate)
{
    throw std::logic_error("SetProxyActivate: not implemented!");
}

bool COldObjectInterface::GetProxyActivate()
{
    throw std::logic_error("GetProxyActivate: not implemented!");
}


void COldObjectInterface::SetMagnifyDamage(float factor)
{
    throw std::logic_error("SetMagnifyDamage: not implemented!");
}

float COldObjectInterface::GetMagnifyDamage()
{
    throw std::logic_error("GetMagnifyDamage: not implemented!");
}


void COldObjectInterface::SetParam(float value)
{
    throw std::logic_error("SetParam: not implemented!");
}

float COldObjectInterface::GetParam()
{
    throw std::logic_error("GetParam: not implemented!");
}
void COldObjectInterface::SetIgnoreBuildCheck(bool bIgnoreBuildCheck)
{
    throw std::logic_error("SetIgnoreBuildCheck: not implemented!");
}

bool COldObjectInterface::GetIgnoreBuildCheck()
{
    throw std::logic_error("GetIgnoreBuildCheck: not implemented!");
}


void COldObjectInterface::SetExploding(bool bExplo)
{
    throw std::logic_error("SetExploding: not implemented!");
}

bool COldObjectInterface::IsExploding()
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("IsExploding: not implemented!");
}

void COldObjectInterface::SetLock(bool bLock)
{
    throw std::logic_error("SetLock: not implemented!");
}

bool COldObjectInterface::GetLock()
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("GetLock: not implemented!");
}

void COldObjectInterface::SetBurn(bool bBurn)
{
    throw std::logic_error("SetBurn: not implemented!");
}

bool COldObjectInterface::GetBurn()
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("GetBurn: not implemented!");
}

void COldObjectInterface::SetDead(bool bDead)
{
    throw std::logic_error("SetDead: not implemented!");
}

bool COldObjectInterface::GetDead()
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("GetDead: not implemented!");
}

bool COldObjectInterface::GetRuin()
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("GetRuin: not implemented!");
}

bool COldObjectInterface::GetActive()
{
    // TODO: temporary hack
    return false;
    //throw std::logic_error("GetActive: not implemented!");
}

bool COldObjectInterface::StartShowLimit()
{
    throw std::logic_error("StartShowLimit: not implemented!");
}

void COldObjectInterface::StopShowLimit()
{
    throw std::logic_error("StopShowLimit: not implemented!");
}


bool COldObjectInterface::IsProgram()
{
    throw std::logic_error("IsProgram: not implemented!");
}

CScript* COldObjectInterface::GetRunScript()
{
    throw std::logic_error("GetRunScript: not implemented!");
}

CBotVar* COldObjectInterface::GetBotVar()
{
    throw std::logic_error("GetBotVar: not implemented!");
}
CPhysics* COldObjectInterface::GetPhysics()
{
    throw std::logic_error("GetPhysics: not implemented!");
}

CMotion* COldObjectInterface::GetMotion()
{
    throw std::logic_error("GetMotion: not implemented!");
}

CAuto* COldObjectInterface::GetAuto()
{
    throw std::logic_error("GetAuto: not implemented!");
}


void COldObjectInterface::SetDefRank(int rank)
{
    throw std::logic_error("SetDefRank: not implemented!");
}

int COldObjectInterface::GetDefRank()
{
    throw std::logic_error("GetDefRank: not implemented!");
}


bool COldObjectInterface::GetTooltipName(std::string& name)
{
    throw std::logic_error("GetTooltipName: not implemented!");
}


void COldObjectInterface::AddDeselList(CObject* pObj)
{
    throw std::logic_error("AddDeselList: not implemented!");
}

CObject* COldObjectInterface::SubDeselList()
{
    throw std::logic_error("SubDeselList: not implemented!");
}

void COldObjectInterface::DeleteDeselList(CObject* pObj)
{
    // TODO: temporary hack
    return;
    //throw std::logic_error("DeleteDeselList: not implemented!");
}

void COldObjectInterface::FlatParent()
{
    throw std::logic_error("FlatParent: not implemented!");
}

float COldObjectInterface::GetInfoReturn()
{
    throw std::logic_error("GetInfoReturn: not implemented!");
}