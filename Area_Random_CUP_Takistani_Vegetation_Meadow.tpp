<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>Meadow</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>obj_meadow.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>CUP Takistani Vegetation, very light bushes for meadow.</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="1"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_amygdalusn1s_ep1"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_pinusm1s_ep1"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_pistacial1s_ep1"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="p_fiberplant_ep1"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="p_papaver_ep1"/>
                    <Parameter Name="PROB" Value="50"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
