<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Forest</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>obj_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>CUP Chernarus Vegetation, forest with trees and few bushes.</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="23235"/>
                <Parameter Name="Hectare density" Type="0" Value="150"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="p_articum"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_pmugo"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_betulahumilis"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_pmugo"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_picea1s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_picea2s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_picea3f"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_pinusn1s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_pinusn2s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>roads.shp</Shapefile>
            <TaskName>Mask: Linear</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="30"/>
                <Parameter Name="Spline interpolation" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
