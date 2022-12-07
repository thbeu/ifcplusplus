/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcBoundaryCondition.h"
#include "ifcpp/IFC4X3/include/IfcConnectionGeometry.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsWithEccentricity.h"
#include "ifcpp/IFC4X3/include/IfcStructuralConnection.h"
#include "ifcpp/IFC4X3/include/IfcStructuralConnectionCondition.h"
#include "ifcpp/IFC4X3/include/IfcStructuralMember.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelConnectsWithEccentricity 
IFC4X3::IfcRelConnectsWithEccentricity::IfcRelConnectsWithEccentricity( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelConnectsWithEccentricity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCRELCONNECTSWITHECCENTRICITY" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingStructuralMember ) { stream << "#" << m_RelatingStructuralMember->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_RelatedStructuralConnection ) { stream << "#" << m_RelatedStructuralConnection->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_AppliedCondition ) { stream << "#" << m_AppliedCondition->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_AdditionalConditions ) { stream << "#" << m_AdditionalConditions->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_SupportedLength ) { m_SupportedLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ConditionCoordinateSystem ) { stream << "#" << m_ConditionCoordinateSystem->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_ConnectionConstraint ) { stream << "#" << m_ConnectionConstraint->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcRelConnectsWithEccentricity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelConnectsWithEccentricity::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelConnectsWithEccentricity, expecting 11, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	readEntityReference( args[4], m_RelatingStructuralMember, map, errorStream );
	readEntityReference( args[5], m_RelatedStructuralConnection, map, errorStream );
	readEntityReference( args[6], m_AppliedCondition, map, errorStream );
	readEntityReference( args[7], m_AdditionalConditions, map, errorStream );
	m_SupportedLength = IfcLengthMeasure::createObjectFromSTEP( args[8], map, errorStream );
	readEntityReference( args[9], m_ConditionCoordinateSystem, map, errorStream );
	readEntityReference( args[10], m_ConnectionConstraint, map, errorStream );
}
void IFC4X3::IfcRelConnectsWithEccentricity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelConnectsStructuralMember::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ConnectionConstraint", m_ConnectionConstraint ) );
}
void IFC4X3::IfcRelConnectsWithEccentricity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelConnectsStructuralMember::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelConnectsWithEccentricity::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnectsStructuralMember::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcRelConnectsWithEccentricity::unlinkFromInverseCounterparts()
{
	IfcRelConnectsStructuralMember::unlinkFromInverseCounterparts();
}