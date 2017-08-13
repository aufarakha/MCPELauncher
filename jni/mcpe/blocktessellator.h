#pragma once
class BlockOccluder;
class Tessellator;
class BlockTessellator {
public:
	void tessellateInWorld(Tessellator&, Block const&, BlockPos const&, unsigned char, bool);
	BlockSource* getRegion() const;
};
