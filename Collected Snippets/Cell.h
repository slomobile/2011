#ifndef Cell_h
#define Cell_h

#include "WProgram.h"
#include <stdint.h>
class Cell
{
  public:
    Cell(uint32_t cellData);
    unsigned long getCellData();
    byte getByte0();
    byte getByte1();
    byte getByte2();
    byte getByte3();
    byte setByte0();
    byte setByte1();
    byte setByte2();
    byte setByte3();
    boolean hasLine();
    boolean isDoorway();
    boolean wasVisited();
    boolean hasWall();
    
  private:
    uint32_t _CellData; 
//       dynamic data/objects in cell  byte 0: bit 7 = victimStateBit1, bit 6 = victimStateBit0, bit 5 = ,            bit 4 = obstaclePresent, bit 3 = obstacleLarge, bit 2 = hazardPresent, bit 1 = visited,     bit 0 = clearToNavigateThrough
//X,Y coordinates of cell within room  byte 1: bit 7 = subMapXBCD3,     bit 6 = subMapXBCD2,     bit 5 = subMapXBCD1, bit 4 = subMapXBCD0,     bit 3 = subMapYBCD3,   bit 2 = subMapYBCD2,   bit 1 = subMapYBCD1, bit 0 = subMapYBCD0
//         static data about cell      byte 2: bit 7 = ,                bit 6 = ,                bit 5 = ,            bit 4 = ,                bit 3 = isDoorway,     bit 2 = isRoom,        bit 1 = roomNumBit1, bit 0 = roomNumBit0 
//         static data about cell      byte 3: bit 7 = eastLine         bit 6 = northLine,       bit 5 = westLine,    bit 4 = southLine,       bit 3 = eastWall,      bit 2 = northWall,     bit 1 = westWall,    bit 0 = southWall 

};

#endif
