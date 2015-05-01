/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLDrivePropertyList.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   The API to interact with Drive.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDrivePropertyList (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDriveProperty;

// ----------------------------------------------------------------------------
//
//   GTLDrivePropertyList
//

// A collection of properties, key-value pairs that are either public or private
// to an application.

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLDrivePropertyList : GTLCollectionObject

// The ETag of the list.
@property (nonatomic, copy) NSString *ETag;

// The list of properties.
@property (nonatomic, retain) NSArray *items;  // of GTLDriveProperty

// This is always drive#propertyList.
@property (nonatomic, copy) NSString *kind;

// The link back to this list.
@property (nonatomic, copy) NSString *selfLink;

@end
