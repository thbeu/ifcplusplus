/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcFastenerTypeEnum.h"

// TYPE IfcFastenerTypeEnum = ENUMERATION OF	(GLUE	,MORTAR	,WELD	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcFastenerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCFASTENERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_GLUE:	stream << ".GLUE."; break;
		case ENUM_MORTAR:	stream << ".MORTAR."; break;
		case ENUM_WELD:	stream << ".WELD."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcFastenerTypeEnum> IFC4X3::IfcFastenerTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcFastenerTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcFastenerTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcFastenerTypeEnum>(); }
	shared_ptr<IfcFastenerTypeEnum> type_object( new IfcFastenerTypeEnum() );
	if( std_iequal( arg, ".GLUE." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_GLUE;
	}
	else if( std_iequal( arg, ".MORTAR." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_MORTAR;
	}
	else if( std_iequal( arg, ".WELD." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_WELD;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
