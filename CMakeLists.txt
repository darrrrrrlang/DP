cmake_minimum_required (VERSION 2.8)

project (DesignPatterns)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

aux_source_directory(. SRCS)
aux_source_directory(./CPPObjectModel/VirtualFunction SRCS_CPPOBJ_VIR)
aux_source_directory(./Creational/AbstractFactory SRCS_CREA_AB)
aux_source_directory(./Creational/Builder SRCS_CREA_BU)
aux_source_directory(./Creational/FactoryMethod SRCS_CREA_FA)
aux_source_directory(./Creational/Prototype SRCS_CREA_PR)
aux_source_directory(./Structural/Adapter SRCS_STRUC_ADAP)
aux_source_directory(./Structural/Bridge SRCS_STRUC_BRID)

add_executable(a.out
${SRCS} 
${SRCS_CPPOBJ_VIR} 
${SRCS_CREA_AB} 
${SRCS_CREA_BU} 
${SRCS_CREA_FA} 
${SRCS_CREA_PR}
${SRCS_STRUC_ADAP}
${SRCS_STRUC_BRID}
)


