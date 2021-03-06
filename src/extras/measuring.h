//	Copyright (c) 2013, Andre Gaschler, Quirin Fischer
//	All rights reserved.
//	
//	Redistribution and use in source and binary forms, with or without modification,
//	are permitted provided that the following conditions are met:
//	
//	* Redistributions of source code must retain the above copyright notice, this
//	  list of conditions and the following disclaimer.
//	
//	* Redistributions in binary form must reproduce the above copyright notice, this
//	  list of conditions and the following disclaimer in the documentation and/or
//	  other materials provided with the distribution.
//	
//	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//	DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
//	ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
//	ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <boundingmesh.h>
#include <SOLID/SOLID.h>
#include <SOLID/SOLID_broad.h>


typedef DT_ObjectHandle SolidObject;

void initSolid();

SolidObject createSolidMesh(const boundingmesh::Mesh& mesh);
void deleteSolidObject(SolidObject object);

double getDistance(SolidObject object, boundingmesh::Vector3 point);
double getPenetrationDepth(SolidObject object, boundingmesh::Vector3 point);
double getMeshDistance(SolidObject object, boundingmesh::Mesh& mesh);
double getMeshDistance2(SolidObject object, boundingmesh::Mesh& mesh);

typedef std::vector< std::vector < Eigen::Vector3f, Eigen::aligned_allocator<Eigen::Vector3f> > > PointVectorVector;
PointVectorVector loadConvexBodies(const std::string filename);

