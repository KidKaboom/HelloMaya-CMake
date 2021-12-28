#include <maya\MSimple.h>
#include <maya\MGlobal.h>

DeclareSimpleCommand(HelloMayaCmake, "Justin Tirado", "1.0")

MStatus HelloMayaCmake::doIt(const MArgList& args) {
    MGlobal::displayInfo("Hello Maya Cmake!");
    return MS::kSuccess;
}