/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcApproval.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcProperty.h"
#include "ifcpp/IFC4X3/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4X3/include/IfcResourceObjectSelect.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcResourceApprovalRelationship 
IFC4X3::IfcResourceApprovalRelationship::IfcResourceApprovalRelationship( int tag ) { m_tag = tag; }
void IFC4X3::IfcResourceApprovalRelationship::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCRESOURCEAPPROVALRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedResourceObjects.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcResourceObjectSelect>& type_object = m_RelatedResourceObjects[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true, precision );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_RelatingApproval ) { stream << "#" << m_RelatingApproval->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcResourceApprovalRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcResourceApprovalRelationship::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readSelectList( args[2], m_RelatedResourceObjects, "IFCRESOURCEOBJECTSELECT", map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){readEntityReference( args[3], m_RelatingApproval, map, errorStream, entityIdNotFound );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcResourceApprovalRelationship, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcResourceApprovalRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> RelatedResourceObjects_vec_object( new AttributeObjectVector() );
	std::copy( m_RelatedResourceObjects.begin(), m_RelatedResourceObjects.end(), std::back_inserter( RelatedResourceObjects_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedResourceObjects", RelatedResourceObjects_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "RelatingApproval", m_RelatingApproval ) );
}
void IFC4X3::IfcResourceApprovalRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcResourceApprovalRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcResourceApprovalRelationship> ptr_self = dynamic_pointer_cast<IfcResourceApprovalRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcResourceApprovalRelationship::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedResourceObjects.size(); ++i )
	{
		shared_ptr<IfcProperty>  RelatedResourceObjects_IfcProperty = dynamic_pointer_cast<IfcProperty>( m_RelatedResourceObjects[i] );
		if( RelatedResourceObjects_IfcProperty )
		{
			RelatedResourceObjects_IfcProperty->m_HasApprovals_inverse.emplace_back( ptr_self );
		}
	}
	if( m_RelatingApproval )
	{
		m_RelatingApproval->m_ApprovedResources_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcResourceApprovalRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedResourceObjects.size(); ++i )
	{
		shared_ptr<IfcProperty>  RelatedResourceObjects_IfcProperty = dynamic_pointer_cast<IfcProperty>( m_RelatedResourceObjects[i] );
		if( RelatedResourceObjects_IfcProperty )
		{
			std::vector<weak_ptr<IfcResourceApprovalRelationship> >& HasApprovals_inverse = RelatedResourceObjects_IfcProperty->m_HasApprovals_inverse;
			for( auto it_HasApprovals_inverse = HasApprovals_inverse.begin(); it_HasApprovals_inverse != HasApprovals_inverse.end(); )
			{
				weak_ptr<IfcResourceApprovalRelationship> self_candidate_weak = *it_HasApprovals_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_HasApprovals_inverse;
					continue;
				}
				shared_ptr<IfcResourceApprovalRelationship> self_candidate( *it_HasApprovals_inverse );
				if( self_candidate.get() == this )
				{
					it_HasApprovals_inverse= HasApprovals_inverse.erase( it_HasApprovals_inverse );
				}
				else
				{
					++it_HasApprovals_inverse;
				}
			}
		}
	}
	if( m_RelatingApproval )
	{
		std::vector<weak_ptr<IfcResourceApprovalRelationship> >& ApprovedResources_inverse = m_RelatingApproval->m_ApprovedResources_inverse;
		for( auto it_ApprovedResources_inverse = ApprovedResources_inverse.begin(); it_ApprovedResources_inverse != ApprovedResources_inverse.end(); )
		{
			weak_ptr<IfcResourceApprovalRelationship> self_candidate_weak = *it_ApprovedResources_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ApprovedResources_inverse;
				continue;
			}
			shared_ptr<IfcResourceApprovalRelationship> self_candidate( *it_ApprovedResources_inverse );
			if( self_candidate.get() == this )
			{
				it_ApprovedResources_inverse= ApprovedResources_inverse.erase( it_ApprovedResources_inverse );
			}
			else
			{
				++it_ApprovedResources_inverse;
			}
		}
	}
}
