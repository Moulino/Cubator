/******************************************************************************
**  libDXFrw - Library to read/write DXF files (ascii & binary)              **
**                                                                           **
**  Copyright (C) 2011 Rallaz, rallazz@gmail.com                             **
**                                                                           **
**  This library is free software, licensed under the terms of the GNU       **
**  General Public License as published by the Free Software Foundation,     **
**  either version 2 of the License, or (at your option) any later version.  **
**  You should have received a copy of the GNU General Public License        **
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.    **
******************************************************************************/

#ifndef LIBDXFRW_H
#define LIBDXFRW_H

// STL
#include <string>

// LIBDXF
#include "drw_entities.h"
#include "drw_objects.h"
#include "drw_interface.h"

// CUBATOR
#include <DefaultProcess.h>
#include <CubException.h>

#define DRW_VERSION     "0.4.0"

class dxfReader;
class dxfWriter;

class dxfRW : public LoaderMapProcess{

    Q_OBJECT

public:
    dxfRW(const char* name = 0);
    ~dxfRW();
    //read: return 0 if all ok
    virtual bool read(DRW_Interface *interface_, bool ext);
    void setBinary(bool b) {binary = b;}
    void setFilepath(const char * name);

    bool write(DRW_Interface *interface_, DRW::Version ver, bool bin);
    bool writeLineType(DRW_LType *ent);
    bool writeLayer(DRW_Layer *ent);
    bool writeDimstyle(DRW_Dimstyle *ent);
    bool writePoint(DRW_Point *ent);
    bool writeLine(DRW_Line *ent);
    bool writeRay(DRW_Ray *ent);
    bool writeXline(DRW_Xline *ent);
    bool writeCircle(DRW_Circle *ent);
    bool writeArc(DRW_Arc *ent);
    bool writeEllipse(DRW_Ellipse *ent);
    bool writeTrace(DRW_Trace *ent);
    bool writeSolid(DRW_Solid *ent);
    bool write3dface(DRW_3Dface *ent);
    bool writeLWPolyline(DRW_LWPolyline *ent);
    bool writePolyline(DRW_Polyline *ent);
    bool writeSpline(DRW_Spline *ent);
    bool writeBlockRecord(std::string name);
    bool writeBlock(DRW_Block *ent);
    bool writeInsert(DRW_Insert *ent);
    bool writeMText(DRW_MText *ent);
    bool writeText(DRW_Text *ent);
    bool writeHatch(DRW_Hatch *ent);
    DRW_ImageDef *writeImage(DRW_Image *ent, std::string name);
    bool writeLeader(DRW_Leader *ent);
    bool writeDimension(DRW_Dimension *ent);

public slots:
    virtual void run() = 0;

protected:
    virtual bool processDxf();
    virtual bool processHeader();
    virtual bool processTables();
    virtual bool processBlocks();
    bool processBlock();
    virtual bool processEntities(bool isblock);
    virtual bool processObjects();


    bool processLType();
    bool processLayer();
    bool processDimStyle();

    bool processPoint();
    bool processLine();
    bool processRay();
    bool processXline();
    bool processCircle();
    bool processArc();
    bool processEllipse();
    bool processTrace();
    bool processSolid();
    bool processInsert();
    bool processLWPolyline();
    bool processPolyline();
    bool processVertex(DRW_Polyline* pl);
    bool processText();
    bool processMText();
    bool processHatch();
    bool processSpline();
    bool process3dface();
    bool processImage();
    bool processImageDef();
    bool processDimension();
    bool processLeader();

//    bool writeHeader();
    bool writeEntity(DRW_Entity *ent);
    bool writeTables();
    bool writeBlocks();
    bool writeObjects();

protected:
    DRW::Version version;
    std::string filepath;
    std::string codePage;
    bool binary;
    dxfReader *reader;
    dxfWriter *writer;
    DRW_Interface *iface;
    DRW_Header header;
//    int section;
    string nextentity;
    int entCount;
    bool wlayer0;
    bool dimstyleStd;
    bool applyExt;
    bool writingBlock;
    std::map<std::string,int> blockMap;
    std::vector<DRW_ImageDef*> imageDef;  /*!< imageDef list */

    int currHandle;

};

#endif // LIBDXFRW_H