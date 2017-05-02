#ifndef MESSAGES_H
#define MESSAGES_H

#include <QObject>

class Text : public QObject{Q_OBJECT};

#define BRIEF00 Text::tr("Internal error !")
#define BRIEF01 Text::tr("Unable to access this table !")
#define BRIEF02 Text::tr("Unable to create the table !")
#define BRIEF03 Text::tr("Unable to remove the table !")
#define BRIEF04 Text::tr("Error reading data from the file !")
#define BRIEF05 Text::tr("Error creating file !")
#define BRIEF06 Text::tr("Error opening file !")
#define BRIEF07 Text::tr("Error reading information tables !")
#define BRIEF08 Text::tr("Error writing image file !")
#define BRIEF09 Text::tr("The extension of the file is unkonwn ...")
#define BRIEF10 Text::tr("The file must be formatted pml !")
#define BRIEF11 Text::tr("Failed to apply port settings !")
#define BRIEF12 Text::tr("Error connecting device !")
#define BRIEF13 Text::tr("Conversion error !")
#define BRIEF14 Text::tr("Error in creating layer !")
#define BRIEF15 Text::tr("Error in deleting layer !")
#define BRIEF16 Text::tr("Error in adding the definition of the icon !")
#define BRIEF17 Text::tr("Error in deleting the definition of the icon !")
#define BRIEF18 Text::tr("Error in adding the definition of the boat !")
#define BRIEF19 Text::tr("Error in deleting the definition of the boat !")
#define BRIEF20 Text::tr("Error in adding the map !")
#define BRIEF21 Text::tr("The area is not contained in the mesh. The volume will not be calculated !")
#define BRIEF22 Text::tr("The point is not contained in the mesh !")
#define BRIEF23 Text::tr("The extension of the file must be in 'pml'.")
#define BRIEF24 Text::tr("Wrong DXF file !")
#define BRIEF25 Text::tr("The file does not exists !")
#define BRIEF26 Text::tr("Error in loading the picture !")
#define BRIEF27 Text::tr("Error in reading the picture !")
#define BRIEF28 Text::tr("Error in adding the icon !")
#define BRIEF29 Text::tr("Error in selecting layer !")

#define PROCESS00 Text::tr("Finished.")
#define PROCESS01 Text::tr("Calculating the level NGF ...")
#define PROCESS02 Text::tr("Calculating the grid contents ...")
#define PROCESS03 Text::tr("Writing the grid ...")
#define PROCESS04 Text::tr("Reading the grid ...")
#define PROCESS05 Text::tr("Recording vertices ...")
#define PROCESS06 Text::tr("Recording triangles ...")
#define PROCESS07 Text::tr("Recording bitmap ...")
#define PROCESS08 Text::tr("Calculating of Delaunay triangulation...")
#define PROCESS09 Text::tr("Loading triangles ...")
#define PROCESS10 Text::tr("Loading vertices ...")
#define PROCESS11 Text::tr("Error ...")
#define PROCESS12 Text::tr("Reading the file ...")
#define PROCESS13 Text::tr("Recording file : ")
#define PROCESS14 Text::tr("Calculates the surface and volume for the area selected ...")
#define PROCESS15 Text::tr("Loading vertices : ")
#define PROCESS16 Text::tr("Loading triangles : ")
#define PROCESS17 Text::tr("Loading grid : ")
#define PROCESS18 Text::tr("Import file ...")
#define PROCESS19 Text::tr("Reading DXF file ...")
#define PROCESS20 Text::tr("Writing pml file ...")
#define PROCESS21 Text::tr("Conversion of the table to graph ...")
#define PROCESS22 Text::tr("Convertion the vertices of the layer to table...")
#define PROCESS23 Text::tr("Calculates the surface for the area selected ...")

#define QUESTION01 Text::tr("Triangulation depends on the table. If you allow editing of the table, you delete the corresponding triangulation. \nDo you really want to continue ?")
#define QUESTION02 Text::tr("Would-you really delete this table ?")
#define QUESTION03 Text::tr("Do you really want to delete all records ?")
#define QUESTION04 Text::tr("The map has been changed ! Would-you save it ?")

#define TITLE01 Text::tr("Cubator question")
#define TITLE02 Text::tr("Enter the height of vertex")
#define TITLE03 Text::tr("Select a map file")
#define TITLE04 Text::tr("Icon rotation")
#define TITLE05 Text::tr("Cubator error")
#define TITLE06 Text::tr("Select a file")
#define TITLE07 Text::tr("Text rotation")
#define TITLE08 Text::tr("Select line width")
#define TITLE09 Text::tr("Remove a map")
#define TITLE10 Text::tr("Layers visibility")
#define TITLE11 Text::tr("Create a layer")
#define TITLE12 Text::tr("Remove a layer")
#define TITLE13 Text::tr("Maps visibility")
#define TITLE14 Text::tr("Cubator information")
#define TITLE15 Text::tr("Layers editable")
#define TITLE16 Text::tr("Select an icon definition file")
#define TITLE17 Text::tr("Bathymetry")
#define TITLE18 Text::tr("Maximum length of edge")
#define TITLE19 Text::tr("Save a map")
#define TITLE20 Text::tr("Select a boat definition file")
#define TITLE21 Text::tr("Loading file : ")
#define TITLE22 Text::tr("Save the image")
#define TITLE23 Text::tr("Select a picture file")
#define TITLE24 Text::tr("Select the default layer")

#define ERROR00 Text::tr("Unknown error !")
#define ERROR03 Text::tr("triangles.length() < trimax !")
#define ERROR04 Text::tr("The points are aligned !")
#define ERROR05 Text::tr("The argument 'triangleId' is invalid !")
#define ERROR06 Text::tr("The argument 'vectorId' is invalid !")
#define ERROR07 Text::tr("Divided by zero !")
#define ERROR08 Text::tr("Pointer isn't initialized !")
#define ERROR09 Text::tr("The list of triangles is empty !")
#define ERROR10 Text::tr("The table already exists !")
#define ERROR11 Text::tr("The database not contains this table !")
#define ERROR12 Text::tr("The map is unknown !")
#define ERROR13 Text::tr("The layer already exists !")
#define ERROR14 Text::tr("The layer doesn't exists !")
#define ERROR15 Text::tr("The definition of the icon already exists !")
#define ERROR16 Text::tr("The definition of the icon doesn't exists !")
#define ERROR17 Text::tr("The definition of the boat already exists !")
#define ERROR18 Text::tr("The definition of the boat doesn't exists !")
#define ERROR19 Text::tr("The map is already loaded !")
#define ERROR20 Text::tr("The layer name is empty !")
#define ERROR21 Text::tr("The layer name already exists !")
#define ERROR22 Text::tr("Error loading translation file !")
#define ERROR23 Text::tr("Error in reading of code !")
#define ERROR24 Text::tr("Unable to get the pointer of the map !")
#define ERROR25 Text::tr("Unable to get the pointer of the layer !")
#define ERROR26 Text::tr("Unable to get the pointer of the icon definition !")
#define ERROR27 Text::tr("Splash picture does not exist !")

#define TEXT00 Text::tr("Height : ")
#define TEXT01 Text::tr("Filename : ")
#define TEXT02 Text::tr("Longitude : ")
#define TEXT03 Text::tr("Latitude : ")
#define TEXT04 Text::tr("Baudrates : ")
#define TEXT05 Text::tr("Data bits : ")
#define TEXT06 Text::tr("Stop bits : ")
#define TEXT07 Text::tr("Parity : ")
#define TEXT08 Text::tr("Flow control : ")
#define TEXT09 Text::tr("Maps files ")
#define TEXT10 Text::tr("Angle : ")
#define TEXT11 Text::tr("Date : ")
#define TEXT12 Text::tr("File : ")
#define TEXT13 Text::tr("Comments : ")
#define TEXT14 Text::tr("Details : ")
#define TEXT15 Text::tr("Method : ")
#define TEXT16 Text::tr("Timeout")
#define TEXT17 Text::tr("Inconsistent")
#define TEXT18 Text::tr("Surface : ")
#define TEXT19 Text::tr("Volume : ")
#define TEXT20 Text::tr("Map")
#define TEXT21 Text::tr("Layer")
#define TEXT22 Text::tr("Icon")
#define TEXT23 Text::tr("Boat")
#define TEXT24 Text::tr("")
#define TEXT25 Text::tr("Layer name : ")
#define TEXT26 Text::tr("Icons files")
#define TEXT27 Text::tr("Length : ")
#define TEXT28 Text::tr("Index : ")
#define TEXT29 Text::tr("Boats files : ")
#define TEXT30 Text::tr("Line : ")
#define TEXT31 Text::tr("Column : ")
#define TEXT32 Text::tr("Table : ")
#define TEXT33 Text::tr("Line width : ")
#define TEXT34 Text::tr("Images ")
#define TEXT35 Text::tr("Picture files ")

#define ACTION01 Text::tr("MoveTool")
#define ACTION02 Text::tr("Insert record")
#define ACTION03 Text::tr("Remove record(s)")
#define ACTION04 Text::tr("Clear table")
#define ACTION05 Text::tr("Position")
#define ACTION06 Text::tr("Date")
#define ACTION07 Text::tr("Rotation")
#define ACTION08 Text::tr("Delete")
#define ACTION09 Text::tr("Color")
#define ACTION10 Text::tr("Font")
#define ACTION11 Text::tr("Show text")
#define ACTION12 Text::tr("Show mesh")
#define ACTION13 Text::tr("Color text")
#define ACTION14 Text::tr("Color mesh")
#define ACTION15 Text::tr("Line thickness")
#define ACTION16 Text::tr("Move to left")
#define ACTION17 Text::tr("Move to right")
#define ACTION18 Text::tr("Convert map coordinates")
#define ACTION19 Text::tr("Convert GPS coordinates")
#define ACTION20 Text::tr("Define first anchor")
#define ACTION21 Text::tr("Define last anchor")
#define ACTION22 Text::tr("Show anchors")

#define MESSAGE01 Text::tr("Set the angle of the rotation.")
#define MESSAGE02 Text::tr("Select line width for painting.")
#define MESSAGE03 Text::tr("Define the elevation of the layers.")
#define MESSAGE04 Text::tr("Define the opacity of the layers (pourcentage).")
#define MESSAGE05 Text::tr("This type of file is not editable.")
#define MESSAGE06 Text::tr("Unable to assign the file to xml document.")
#define MESSAGE07 Text::tr("The shape should contain at least three points.")
#define MESSAGE08 Text::tr("Select text color.")
#define MESSAGE09 Text::tr("Select mesh color.")
#define MESSAGE10 Text::tr("Select line width")
#define MESSAGE11 Text::tr("The icon has been added.")

#endif // MESSAGES_H
