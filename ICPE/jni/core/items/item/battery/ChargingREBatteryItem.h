#pragma once

#include "items/item/base/EnergyStorageItem.h"

class ChargingREBatteryItem : public EnergyStorageItem
{
public:
	ChargingREBatteryItem();
public:
	virtual unsigned long getMaxEnergy()const;
	virtual unsigned int getIVoltage()const;
	virtual unsigned int getOVoltage()const;
    virtual TextureUVCoordinateSet const& getIcon(int, int, bool) const;
};
