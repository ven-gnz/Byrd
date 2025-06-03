The repo structure, along with the visual studio integration is decided as follows:

root/
    core/
        math/
        renderer/
        physics/
        .../
        ... possibly a lot more components based on time and necessity.
    vs_projects/
        Byrd/ vscode generated folder for blank solution
            Byrd.sln
            byrd.core.math/
                x64/
                byrd.core.math.vcxproj
                byrd.core.math.vcxproj.filters
                byrd.core.math.vcxproj.user


This leads for a cleaner repo structure. To keep things simple,
I will be:
    - generating a new VSproject for a key part of the engine
    - adding the true source as an include to the project
    - later add a new folder for build targets, when I have more than one component on the engine.

    The including can be done by:
        - in visual studio, unloading the project.
            - Then from xml, locate the ItemGroup tag, and add the source folder as include.
            - for example in math, I did <ClCompile Include="..\..\core\math\**\*.cpp" /> and
            <ClInclude Include="..\..\core\math\**\*.h" />
            - This looks good for now.