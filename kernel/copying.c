/* ==> Do not modify this file!!  It is created automatically
   by copying.awk.  Modify copying.awk instead.  <== */

#include "conq.h"

void
describe_copyright(int arg, char *key, TextBuffer *buf)
{
    tbcatline(buf, "		    GNU GENERAL PUBLIC LICENSE");
    tbcatline(buf, "		       Version 2, June 1991");
    tbcatline(buf, "");
    tbcatline(buf, " Copyright (C) 1989, 1991 Free Software Foundation, Inc.");
    tbcatline(buf, "                          675 Mass Ave, Cambridge, MA 02139, USA");
    tbcatline(buf, " Everyone is permitted to copy and distribute verbatim copies");
    tbcatline(buf, " of this license document, but changing it is not allowed.");
    tbcatline(buf, "");
    tbcatline(buf, "			    Preamble");
    tbcatline(buf, "");
    tbcatline(buf, "  The licenses for most software are designed to take away your");
    tbcatline(buf, "freedom to share and change it.  By contrast, the GNU General Public");
    tbcatline(buf, "License is intended to guarantee your freedom to share and change free");
    tbcatline(buf, "software--to make sure the software is free for all its users.  This");
    tbcatline(buf, "General Public License applies to most of the Free Software");
    tbcatline(buf, "Foundation's software and to any other program whose authors commit to");
    tbcatline(buf, "using it.  (Some other Free Software Foundation software is covered by");
    tbcatline(buf, "the GNU Library General Public License instead.)  You can apply it to");
    tbcatline(buf, "your programs, too.");
    tbcatline(buf, "");
    tbcatline(buf, "  When we speak of free software, we are referring to freedom, not");
    tbcatline(buf, "price.  Our General Public Licenses are designed to make sure that you");
    tbcatline(buf, "have the freedom to distribute copies of free software (and charge for");
    tbcatline(buf, "this service if you wish), that you receive source code or can get it");
    tbcatline(buf, "if you want it, that you can change the software or use pieces of it");
    tbcatline(buf, "in new free programs; and that you know you can do these things.");
    tbcatline(buf, "");
    tbcatline(buf, "  To protect your rights, we need to make restrictions that forbid");
    tbcatline(buf, "anyone to deny you these rights or to ask you to surrender the rights.");
    tbcatline(buf, "These restrictions translate to certain responsibilities for you if you");
    tbcatline(buf, "distribute copies of the software, or if you modify it.");
    tbcatline(buf, "");
    tbcatline(buf, "  For example, if you distribute copies of such a program, whether");
    tbcatline(buf, "gratis or for a fee, you must give the recipients all the rights that");
    tbcatline(buf, "you have.  You must make sure that they, too, receive or can get the");
    tbcatline(buf, "source code.  And you must show them these terms so they know their");
    tbcatline(buf, "rights.");
    tbcatline(buf, "");
    tbcatline(buf, "  We protect your rights with two steps: (1) copyright the software, and");
    tbcatline(buf, "(2) offer you this license which gives you legal permission to copy,");
    tbcatline(buf, "distribute and/or modify the software.");
    tbcatline(buf, "");
    tbcatline(buf, "  Also, for each author's protection and ours, we want to make certain");
    tbcatline(buf, "that everyone understands that there is no warranty for this free");
    tbcatline(buf, "software.  If the software is modified by someone else and passed on, we");
    tbcatline(buf, "want its recipients to know that what they have is not the original, so");
    tbcatline(buf, "that any problems introduced by others will not reflect on the original");
    tbcatline(buf, "authors' reputations.");
    tbcatline(buf, "");
    tbcatline(buf, "  Finally, any free program is threatened constantly by software");
    tbcatline(buf, "patents.  We wish to avoid the danger that redistributors of a free");
    tbcatline(buf, "program will individually obtain patent licenses, in effect making the");
    tbcatline(buf, "program proprietary.  To prevent this, we have made it clear that any");
    tbcatline(buf, "patent must be licensed for everyone's free use or not licensed at all.");
    tbcatline(buf, "");
    tbcatline(buf, "  The precise terms and conditions for copying, distribution and");
    tbcatline(buf, "modification follow.");
    tbcatline(buf, "");
    tbcatline(buf, "		    GNU GENERAL PUBLIC LICENSE");
    tbcatline(buf, "   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION");
    tbcatline(buf, "");
    tbcatline(buf, "  0. This License applies to any program or other work which contains");
    tbcatline(buf, "a notice placed by the copyright holder saying it may be distributed");
    tbcatline(buf, "under the terms of this General Public License.  The \"Program\", below,");
    tbcatline(buf, "refers to any such program or work, and a \"work based on the Program\"");
    tbcatline(buf, "means either the Program or any derivative work under copyright law:");
    tbcatline(buf, "that is to say, a work containing the Program or a portion of it,");
    tbcatline(buf, "either verbatim or with modifications and/or translated into another");
    tbcatline(buf, "language.  (Hereinafter, translation is included without limitation in");
    tbcatline(buf, "the term \"modification\".)  Each licensee is addressed as \"you\".");
    tbcatline(buf, "");
    tbcatline(buf, "Activities other than copying, distribution and modification are not");
    tbcatline(buf, "covered by this License; they are outside its scope.  The act of");
    tbcatline(buf, "running the Program is not restricted, and the output from the Program");
    tbcatline(buf, "is covered only if its contents constitute a work based on the");
    tbcatline(buf, "Program (independent of having been made by running the Program).");
    tbcatline(buf, "Whether that is true depends on what the Program does.");
    tbcatline(buf, "");
    tbcatline(buf, "  1. You may copy and distribute verbatim copies of the Program's");
    tbcatline(buf, "source code as you receive it, in any medium, provided that you");
    tbcatline(buf, "conspicuously and appropriately publish on each copy an appropriate");
    tbcatline(buf, "copyright notice and disclaimer of warranty; keep intact all the");
    tbcatline(buf, "notices that refer to this License and to the absence of any warranty;");
    tbcatline(buf, "and give any other recipients of the Program a copy of this License");
    tbcatline(buf, "along with the Program.");
    tbcatline(buf, "");
    tbcatline(buf, "You may charge a fee for the physical act of transferring a copy, and");
    tbcatline(buf, "you may at your option offer warranty protection in exchange for a fee.");
    tbcatline(buf, "");
    tbcatline(buf, "  2. You may modify your copy or copies of the Program or any portion");
    tbcatline(buf, "of it, thus forming a work based on the Program, and copy and");
    tbcatline(buf, "distribute such modifications or work under the terms of Section 1");
    tbcatline(buf, "above, provided that you also meet all of these conditions:");
    tbcatline(buf, "");
    tbcatline(buf, "    a) You must cause the modified files to carry prominent notices");
    tbcatline(buf, "    stating that you changed the files and the date of any change.");
    tbcatline(buf, "");
    tbcatline(buf, "    b) You must cause any work that you distribute or publish, that in");
    tbcatline(buf, "    whole or in part contains or is derived from the Program or any");
    tbcatline(buf, "    part thereof, to be licensed as a whole at no charge to all third");
    tbcatline(buf, "    parties under the terms of this License.");
    tbcatline(buf, "");
    tbcatline(buf, "    c) If the modified program normally reads commands interactively");
    tbcatline(buf, "    when run, you must cause it, when started running for such");
    tbcatline(buf, "    interactive use in the most ordinary way, to print or display an");
    tbcatline(buf, "    announcement including an appropriate copyright notice and a");
    tbcatline(buf, "    notice that there is no warranty (or else, saying that you provide");
    tbcatline(buf, "    a warranty) and that users may redistribute the program under");
    tbcatline(buf, "    these conditions, and telling the user how to view a copy of this");
    tbcatline(buf, "    License.  (Exception: if the Program itself is interactive but");
    tbcatline(buf, "    does not normally print such an announcement, your work based on");
    tbcatline(buf, "    the Program is not required to print an announcement.)");
    tbcatline(buf, "");
    tbcatline(buf, "These requirements apply to the modified work as a whole.  If");
    tbcatline(buf, "identifiable sections of that work are not derived from the Program,");
    tbcatline(buf, "and can be reasonably considered independent and separate works in");
    tbcatline(buf, "themselves, then this License, and its terms, do not apply to those");
    tbcatline(buf, "sections when you distribute them as separate works.  But when you");
    tbcatline(buf, "distribute the same sections as part of a whole which is a work based");
    tbcatline(buf, "on the Program, the distribution of the whole must be on the terms of");
    tbcatline(buf, "this License, whose permissions for other licensees extend to the");
    tbcatline(buf, "entire whole, and thus to each and every part regardless of who wrote it.");
    tbcatline(buf, "");
    tbcatline(buf, "Thus, it is not the intent of this section to claim rights or contest");
    tbcatline(buf, "your rights to work written entirely by you; rather, the intent is to");
    tbcatline(buf, "exercise the right to control the distribution of derivative or");
    tbcatline(buf, "collective works based on the Program.");
    tbcatline(buf, "");
    tbcatline(buf, "In addition, mere aggregation of another work not based on the Program");
    tbcatline(buf, "with the Program (or with a work based on the Program) on a volume of");
    tbcatline(buf, "a storage or distribution medium does not bring the other work under");
    tbcatline(buf, "the scope of this License.");
    tbcatline(buf, "");
    tbcatline(buf, "  3. You may copy and distribute the Program (or a work based on it,");
    tbcatline(buf, "under Section 2) in object code or executable form under the terms of");
    tbcatline(buf, "Sections 1 and 2 above provided that you also do one of the following:");
    tbcatline(buf, "");
    tbcatline(buf, "    a) Accompany it with the complete corresponding machine-readable");
    tbcatline(buf, "    source code, which must be distributed under the terms of Sections");
    tbcatline(buf, "    1 and 2 above on a medium customarily used for software interchange; or,");
    tbcatline(buf, "");
    tbcatline(buf, "    b) Accompany it with a written offer, valid for at least three");
    tbcatline(buf, "    years, to give any third party, for a charge no more than your");
    tbcatline(buf, "    cost of physically performing source distribution, a complete");
    tbcatline(buf, "    machine-readable copy of the corresponding source code, to be");
    tbcatline(buf, "    distributed under the terms of Sections 1 and 2 above on a medium");
    tbcatline(buf, "    customarily used for software interchange; or,");
    tbcatline(buf, "");
    tbcatline(buf, "    c) Accompany it with the information you received as to the offer");
    tbcatline(buf, "    to distribute corresponding source code.  (This alternative is");
    tbcatline(buf, "    allowed only for noncommercial distribution and only if you");
    tbcatline(buf, "    received the program in object code or executable form with such");
    tbcatline(buf, "    an offer, in accord with Subsection b above.)");
    tbcatline(buf, "");
    tbcatline(buf, "The source code for a work means the preferred form of the work for");
    tbcatline(buf, "making modifications to it.  For an executable work, complete source");
    tbcatline(buf, "code means all the source code for all modules it contains, plus any");
    tbcatline(buf, "associated interface definition files, plus the scripts used to");
    tbcatline(buf, "control compilation and installation of the executable.  However, as a");
    tbcatline(buf, "special exception, the source code distributed need not include");
    tbcatline(buf, "anything that is normally distributed (in either source or binary");
    tbcatline(buf, "form) with the major components (compiler, kernel, and so on) of the");
    tbcatline(buf, "operating system on which the executable runs, unless that component");
    tbcatline(buf, "itself accompanies the executable.");
    tbcatline(buf, "");
    tbcatline(buf, "If distribution of executable or object code is made by offering");
    tbcatline(buf, "access to copy from a designated place, then offering equivalent");
    tbcatline(buf, "access to copy the source code from the same place counts as");
    tbcatline(buf, "distribution of the source code, even though third parties are not");
    tbcatline(buf, "compelled to copy the source along with the object code.");
    tbcatline(buf, "");
    tbcatline(buf, "  4. You may not copy, modify, sublicense, or distribute the Program");
    tbcatline(buf, "except as expressly provided under this License.  Any attempt");
    tbcatline(buf, "otherwise to copy, modify, sublicense or distribute the Program is");
    tbcatline(buf, "void, and will automatically terminate your rights under this License.");
    tbcatline(buf, "However, parties who have received copies, or rights, from you under");
    tbcatline(buf, "this License will not have their licenses terminated so long as such");
    tbcatline(buf, "parties remain in full compliance.");
    tbcatline(buf, "");
    tbcatline(buf, "  5. You are not required to accept this License, since you have not");
    tbcatline(buf, "signed it.  However, nothing else grants you permission to modify or");
    tbcatline(buf, "distribute the Program or its derivative works.  These actions are");
    tbcatline(buf, "prohibited by law if you do not accept this License.  Therefore, by");
    tbcatline(buf, "modifying or distributing the Program (or any work based on the");
    tbcatline(buf, "Program), you indicate your acceptance of this License to do so, and");
    tbcatline(buf, "all its terms and conditions for copying, distributing or modifying");
    tbcatline(buf, "the Program or works based on it.");
    tbcatline(buf, "");
    tbcatline(buf, "  6. Each time you redistribute the Program (or any work based on the");
    tbcatline(buf, "Program), the recipient automatically receives a license from the");
    tbcatline(buf, "original licensor to copy, distribute or modify the Program subject to");
    tbcatline(buf, "these terms and conditions.  You may not impose any further");
    tbcatline(buf, "restrictions on the recipients' exercise of the rights granted herein.");
    tbcatline(buf, "You are not responsible for enforcing compliance by third parties to");
    tbcatline(buf, "this License.");
    tbcatline(buf, "");
    tbcatline(buf, "  7. If, as a consequence of a court judgment or allegation of patent");
    tbcatline(buf, "infringement or for any other reason (not limited to patent issues),");
    tbcatline(buf, "conditions are imposed on you (whether by court order, agreement or");
    tbcatline(buf, "otherwise) that contradict the conditions of this License, they do not");
    tbcatline(buf, "excuse you from the conditions of this License.  If you cannot");
    tbcatline(buf, "distribute so as to satisfy simultaneously your obligations under this");
    tbcatline(buf, "License and any other pertinent obligations, then as a consequence you");
    tbcatline(buf, "may not distribute the Program at all.  For example, if a patent");
    tbcatline(buf, "license would not permit royalty-free redistribution of the Program by");
    tbcatline(buf, "all those who receive copies directly or indirectly through you, then");
    tbcatline(buf, "the only way you could satisfy both it and this License would be to");
    tbcatline(buf, "refrain entirely from distribution of the Program.");
    tbcatline(buf, "");
    tbcatline(buf, "If any portion of this section is held invalid or unenforceable under");
    tbcatline(buf, "any particular circumstance, the balance of the section is intended to");
    tbcatline(buf, "apply and the section as a whole is intended to apply in other");
    tbcatline(buf, "circumstances.");
    tbcatline(buf, "");
    tbcatline(buf, "It is not the purpose of this section to induce you to infringe any");
    tbcatline(buf, "patents or other property right claims or to contest validity of any");
    tbcatline(buf, "such claims; this section has the sole purpose of protecting the");
    tbcatline(buf, "integrity of the free software distribution system, which is");
    tbcatline(buf, "implemented by public license practices.  Many people have made");
    tbcatline(buf, "generous contributions to the wide range of software distributed");
    tbcatline(buf, "through that system in reliance on consistent application of that");
    tbcatline(buf, "system; it is up to the author/donor to decide if he or she is willing");
    tbcatline(buf, "to distribute software through any other system and a licensee cannot");
    tbcatline(buf, "impose that choice.");
    tbcatline(buf, "");
    tbcatline(buf, "This section is intended to make thoroughly clear what is believed to");
    tbcatline(buf, "be a consequence of the rest of this License.");
    tbcatline(buf, "");
    tbcatline(buf, "  8. If the distribution and/or use of the Program is restricted in");
    tbcatline(buf, "certain countries either by patents or by copyrighted interfaces, the");
    tbcatline(buf, "original copyright holder who places the Program under this License");
    tbcatline(buf, "may add an explicit geographical distribution limitation excluding");
    tbcatline(buf, "those countries, so that distribution is permitted only in or among");
    tbcatline(buf, "countries not thus excluded.  In such case, this License incorporates");
    tbcatline(buf, "the limitation as if written in the body of this License.");
    tbcatline(buf, "");
    tbcatline(buf, "  9. The Free Software Foundation may publish revised and/or new versions");
    tbcatline(buf, "of the General Public License from time to time.  Such new versions will");
    tbcatline(buf, "be similar in spirit to the present version, but may differ in detail to");
    tbcatline(buf, "address new problems or concerns.");
    tbcatline(buf, "");
    tbcatline(buf, "Each version is given a distinguishing version number.  If the Program");
    tbcatline(buf, "specifies a version number of this License which applies to it and \"any");
    tbcatline(buf, "later version\", you have the option of following the terms and conditions");
    tbcatline(buf, "either of that version or of any later version published by the Free");
    tbcatline(buf, "Software Foundation.  If the Program does not specify a version number of");
    tbcatline(buf, "this License, you may choose any version ever published by the Free Software");
    tbcatline(buf, "Foundation.");
    tbcatline(buf, "");
    tbcatline(buf, "  10. If you wish to incorporate parts of the Program into other free");
    tbcatline(buf, "programs whose distribution conditions are different, write to the author");
    tbcatline(buf, "to ask for permission.  For software which is copyrighted by the Free");
    tbcatline(buf, "Software Foundation, write to the Free Software Foundation; we sometimes");
    tbcatline(buf, "make exceptions for this.  Our decision will be guided by the two goals");
    tbcatline(buf, "of preserving the free status of all derivatives of our free software and");
    tbcatline(buf, "of promoting the sharing and reuse of software generally.");
    tbcatline(buf, "");
}

void
describe_warranty(int arg, char *key, TextBuffer *buf)
{
    tbcatline(buf, "			    NO WARRANTY");
    tbcatline(buf, "");
    tbcatline(buf, "  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY");
    tbcatline(buf, "FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN");
    tbcatline(buf, "OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES");
    tbcatline(buf, "PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED");
    tbcatline(buf, "OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF");
    tbcatline(buf, "MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS");
    tbcatline(buf, "TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE");
    tbcatline(buf, "PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,");
    tbcatline(buf, "REPAIR OR CORRECTION.");
    tbcatline(buf, "");
    tbcatline(buf, "  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING");
    tbcatline(buf, "WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR");
    tbcatline(buf, "REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,");
    tbcatline(buf, "INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING");
    tbcatline(buf, "OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED");
    tbcatline(buf, "TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY");
    tbcatline(buf, "YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER");
    tbcatline(buf, "PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE");
    tbcatline(buf, "POSSIBILITY OF SUCH DAMAGES.");
    tbcatline(buf, "");
}
