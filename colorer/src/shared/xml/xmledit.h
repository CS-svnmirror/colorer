#ifndef _CXMLEDIT_
#define _CXMLEDIT_

#include<xml/xml.h>

#define SP 1

/** XML Parser class editable extention.
    This class allows modifing the structure
    of parsed XML tree.
    @ingroup xml
*/
class CXmlEdit : public CXmlEl
{
protected:
  bool isLoop(CXmlEdit *el, CXmlEdit *parent);
public:
  CXmlEdit();
  ~CXmlEdit();

  void setName(const String *newname);

  // parameters add and change
  bool addParam(const String *name, const String *val);
  bool addParam(const String *name, int val);
  bool addParam(const String *name, double val);
  bool changeContent(const String *data);
  bool removeParam(const String *name);

  bool move(CXmlEdit *parent, CXmlEdit *after);
  CXmlEdit *copyTree(CXmlEdit *el);

  // saving tree into text
  int getLevelSize(int lev);
  int saveLevel(char *dest, int lev);
};

#endif

/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is the Colorer Library.
 *
 * The Initial Developer of the Original Code is
 * Cail Lomecb <ruiv@uic.nnov.ru>.
 * Portions created by the Initial Developer are Copyright (C) 1999-2003
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */
