/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcTendonAnchorTypeEnum.h"

// TYPE IfcTendonAnchorTypeEnum = ENUMERATION OF	(COUPLER	,FIXED_END	,TENSIONING_END	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcTendonAnchorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCTENDONANCHORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_COUPLER:	stream << ".COUPLER."; break;
		case ENUM_FIXED_END:	stream << ".FIXED_END."; break;
		case ENUM_TENSIONING_END:	stream << ".TENSIONING_END."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcTendonAnchorTypeEnum> IFC4X3::IfcTendonAnchorTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcTendonAnchorTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcTendonAnchorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcTendonAnchorTypeEnum>(); }
	shared_ptr<IfcTendonAnchorTypeEnum> type_object( new IfcTendonAnchorTypeEnum() );
	if( std_iequal( arg, ".COUPLER." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_COUPLER;
	}
	else if( std_iequal( arg, ".FIXED_END." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_FIXED_END;
	}
	else if( std_iequal( arg, ".TENSIONING_END." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_TENSIONING_END;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
