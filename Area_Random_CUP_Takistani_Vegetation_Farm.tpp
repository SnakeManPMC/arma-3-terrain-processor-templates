<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Farm</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>obj_farm.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>CUP Takistani Vegetation, bushes for farms.</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="347682"/>
                <Parameter Name="Hectare density" Type="0" Value="1"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_amygdalusn1s_ep1"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_pinusm1s_ep1"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_pistacial1s_ep1"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="p_wheat_ep1"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="75"/>
                    <Parameter Name="MAXHEIGHT" Value="125"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
