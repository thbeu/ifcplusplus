/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcProjectedOrTrueLengthEnum.h"

// TYPE IfcProjectedOrTrueLengthEnum = ENUMERATION OF	(PROJECTED_LENGTH	,TRUE_LENGTH);
void IFC4X3::IfcProjectedOrTrueLengthEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCPROJECTEDORTRUELENGTHENUM("; }
	switch( m_enum )
	{
		case ENUM_PROJECTED_LENGTH:	stream << ".PROJECTED_LENGTH."; break;
		case ENUM_TRUE_LENGTH:	stream << ".TRUE_LENGTH."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcProjectedOrTrueLengthEnum> IFC4X3::IfcProjectedOrTrueLengthEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcProjectedOrTrueLengthEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcProjectedOrTrueLengthEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcProjectedOrTrueLengthEnum>(); }
	shared_ptr<IfcProjectedOrTrueLengthEnum> type_object( new IfcProjectedOrTrueLengthEnum() );
	if( std_iequal( arg, ".PROJECTED_LENGTH." ) )
	{
		type_object->m_enum = IfcProjectedOrTrueLengthEnum::ENUM_PROJECTED_LENGTH;
	}
	else if( std_iequal( arg, ".TRUE_LENGTH." ) )
	{
		type_object->m_enum = IfcProjectedOrTrueLengthEnum::ENUM_TRUE_LENGTH;
	}
	return type_object;
}
