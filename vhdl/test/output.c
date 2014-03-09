#include <freehdl/kernel.h>
#include <freehdl/std.h>


/* External declarations */
/* Definitions for enumeration type :ieee:std_logic_1164:std_ulogic */
class L4ieee_Q14std_logic_1164_I10std_ulogic:public enum_info_base{
   static const char *values[];
public:
   L4ieee_Q14std_logic_1164_I10std_ulogic():enum_info_base(0,8,values) {};
   static const char **get_values() { return values; }
   static int low() { return 0; }
   static int high() { return 8; }
   static int left() { return 0; }
   static int right() { return 8; }
};
extern L4ieee_Q14std_logic_1164_I10std_ulogic L4ieee_Q14std_logic_1164_I10std_ulogic_INFO;
/** Enumeration info class :ieee:std_logic_1164:std_logic */
class L4ieee_Q14std_logic_1164_I9std_logic:public enum_info_base{
   static const char **values;
public:
   L4ieee_Q14std_logic_1164_I9std_logic():enum_info_base(0,8,values) {};
   static const char **get_values() { return values; }
   static int low() { return 0; }
   static int high() { return 8; }
   static int left() { return 0; }
   static int right() { return 8; }
};
extern L4ieee_Q14std_logic_1164_I9std_logic L4ieee_Q14std_logic_1164_I9std_logic_INFO;
extern array_info L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO;
#define L4ieee_Q14std_logic_1164_T16std_logic_vector array_type<enumeration >
#define L4ieee_Q14std_logic_1164_I16std_logic_vector array_info

/* End of external declarations */
extern array_info L4work_E12some_circuit_I3_t0_INFO;
#define L4work_E12some_circuit_T3_t0 array_type<enumeration >
#define L4work_E12some_circuit_I3_t0 array_info

extern array_info L4work_E12some_circuit_I3_t1_INFO;
#define L4work_E12some_circuit_T3_t1 array_type<enumeration >
#define L4work_E12some_circuit_I3_t1 array_info

/* Entity class declaration */
class L4work_E12some_circuit {
public:
   void *father_component;
  L4work_E12some_circuit (name_stack &iname, map_list *mlist, void *father);
  ~L4work_E12some_circuit() {};
  sig_info<L4work_E12some_circuit_T3_t0> *L4work_E12some_circuit_S1a;
  sig_info<L4work_E12some_circuit_T3_t1> *L4work_E12some_circuit_S1b;
  sig_info<enumeration> *L4work_E12some_circuit_S1x,*L4work_E12some_circuit_S1y;
};

L4work_E12some_circuit_I3_t0 L4work_E12some_circuit_I3_t0_INFO;
L4work_E12some_circuit_I3_t1 L4work_E12some_circuit_I3_t1_INFO;
/* Implementation of entity methods */
L4work_E12some_circuit::
L4work_E12some_circuit(name_stack &iname, map_list *mlist, void *father) {
    father_component = father;
    iname.push("");
    L4work_E12some_circuit_S1a=new sig_info<L4work_E12some_circuit_T3_t0>(iname,":a",":work:some_circuit",mlist,(&L4work_E12some_circuit_I3_t0_INFO),vIN,this);
    L4work_E12some_circuit_S1b=new sig_info<L4work_E12some_circuit_T3_t1>(iname,":b",":work:some_circuit",mlist,(&L4work_E12some_circuit_I3_t1_INFO),vIN,this);
    L4work_E12some_circuit_S1x=new sig_info<enumeration>(iname,":x",":work:some_circuit",mlist,(&L4ieee_Q14std_logic_1164_I9std_logic_INFO),vOUT,this);
    L4work_E12some_circuit_S1y=new sig_info<enumeration>(iname,":y",":work:some_circuit",mlist,(&L4ieee_Q14std_logic_1164_I9std_logic_INFO),vOUT,this);
    iname.pop();
};


/* Initialization function for entity :work:some_circuit */
int L3std_Q8standard_init ();
int L4ieee_Q14std_logic_1164_init ();
bool L4work_E12some_circuit_init_done = false;
int L4work_E12some_circuit_init(){
if (L4work_E12some_circuit_init_done) return 1;
L4work_E12some_circuit_init_done=true;
L3std_Q8standard_init ();
L4ieee_Q14std_logic_1164_init ();
register_source_file("/home/zorfmorf/repos/vhdl/test.vhdl","test.vhdl");
name_stack iname;
iname.push("");
L4work_E12some_circuit_I3_t0_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,1,downto,0,-1).register_type(":work:some_circuit",":work:some_circuit:_t0",":_t0",NULL);
L4work_E12some_circuit_I3_t1_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,1,downto,0,-1).register_type(":work:some_circuit",":work:some_circuit:_t1",":_t1",NULL);
iname.pop();
return 1;
}

/* end of L4work_E12some_circuit Entity */
/* External declarations */
/** Enumeration info class :ieee:std_logic_1164:ux01 */
class L4ieee_Q14std_logic_1164_I4ux01:public enum_info_base{
   static const char **values;
public:
   L4ieee_Q14std_logic_1164_I4ux01():enum_info_base(0,3,values) {};
   static const char **get_values() { return values; }
   static int low() { return 0; }
   static int high() { return 3; }
   static int left() { return 0; }
   static int right() { return 3; }
};
extern L4ieee_Q14std_logic_1164_I4ux01 L4ieee_Q14std_logic_1164_I4ux01_INFO;
/* Prototype for subprogram :ieee:std_logic_1164:"xor" */
enumeration L4ieee_Q14std_logic_1164_Y6op_xor_i63(const enumeration ,const enumeration );
/* No header for IIR_EnumerationLiteral */
/* End of external declarations */
/* Architecture class declaration */
class L4work_E12some_circuit_A8behavior : public L4work_E12some_circuit {
public:
  L4work_E12some_circuit_A8behavior (name_stack &iname, map_list *mlist, void *father, int level);
  ~L4work_E12some_circuit_A8behavior();
  sig_info<enumeration> *L4work_E12some_circuit_A8behavior_S6xorout;
};

/* Concurrent statement class declaration(s) */


/* Class decl. process _5pn */
class L4work_E12some_circuit_A8behavior_P4_5pn : public process_base {
public:
  L4work_E12some_circuit_A8behavior_P4_5pn(L4work_E12some_circuit_A8behavior* L4work_E12some_circuit_A8behavior_AP_PAR,name_stack &iname);
  ~L4work_E12some_circuit_A8behavior_P4_5pn() {};
  bool execute();
  L4work_E12some_circuit_A8behavior* L4work_E12some_circuit_A8behavior_AP;
  driver_info *L4work_E12some_circuit_A8behavior_D6xorout;
  L4work_E12some_circuit_T3_t0 *L4work_E12some_circuit_R1a;
  sig_info<L4work_E12some_circuit_T3_t0> *L4work_E12some_circuit_S1a;
  winfo_item winfo[1];
  L4work_E12some_circuit_A8behavior *arch;
};
  /* Implementation of process :work:some_circuit(behavior):_5pn methods */
L4work_E12some_circuit_A8behavior_P4_5pn::
L4work_E12some_circuit_A8behavior_P4_5pn(L4work_E12some_circuit_A8behavior *L4work_E12some_circuit_A8behavior_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E12some_circuit_A8behavior_AP=L4work_E12some_circuit_A8behavior_AP_PAR;
    L4work_E12some_circuit_S1a=L4work_E12some_circuit_A8behavior_AP->L4work_E12some_circuit_S1a;
    L4work_E12some_circuit_R1a=&L4work_E12some_circuit_A8behavior_AP->L4work_E12some_circuit_S1a->reader();
    L4work_E12some_circuit_A8behavior_D6xorout=kernel.get_driver(this,L4work_E12some_circuit_A8behavior_AP->L4work_E12some_circuit_A8behavior_S6xorout);
    {
     sigacl_list sal(2);
     sal.add(L4work_E12some_circuit_A8behavior_AP->L4work_E12some_circuit_S1a,&(tmpacl->clear()<<0));
     sal.add(L4work_E12some_circuit_A8behavior_AP->L4work_E12some_circuit_S1a,&(tmpacl->clear()<<1));
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E12some_circuit_A8behavior_P4_5pn::execute() {
    L4work_E12some_circuit_A8behavior_D6xorout->inertial_assign(L4ieee_Q14std_logic_1164_Y6op_xor_i63 ((*L4work_E12some_circuit_R1a)[0],(*L4work_E12some_circuit_R1a)[1]),vtime(0));
    return true;
}

/* handle for simulator to find architecture */
void*
L4work_E12some_circuit_A8behavior_handle(name_stack &iname, map_list *mlist, void *father, int level) {
 REPORT(cout << "Starting constructor L4work_E12some_circuit_A8behavior ..." << endl);
 return new L4work_E12some_circuit_A8behavior(iname, mlist, father, level);
};
extern int L4work_E12some_circuit_A8behavior_init ();
handle_info *L4work_E12some_circuit_A8behavior_hinfo =
  add_handle("work","some_circuit","behavior",&L4work_E12some_circuit_A8behavior_handle,&L4work_E12some_circuit_A8behavior_init);
/* Architecture Constructor */
L4work_E12some_circuit_A8behavior::
L4work_E12some_circuit_A8behavior(name_stack &iname, map_list *mlist, void *father, int level) :
  L4work_E12some_circuit(iname, mlist, father) {
    iname.push(":behavior");
    iname.push("");
    L4work_E12some_circuit_A8behavior_S6xorout=new sig_info<enumeration > (iname, ":xorout",":work:some_circuit(behavior)",(&L4ieee_Q14std_logic_1164_I9std_logic_INFO),vREGISTER,this);
    L4work_E12some_circuit_A8behavior_S6xorout->init(enumeration(2));
    kernel.add_process(new L4work_E12some_circuit_A8behavior_P4_5pn(this,iname.set(":_5pn")),":work:some_circuit(behavior)",":_5pn",this);
    iname.pop(); /* pop last declaration from name stack */ iname.pop(); /* pop architecture from name stack */
};

/* Initialization function for architecture :work:some_circuit(behavior) */
int L4work_E12some_circuit_init ();
int L3std_Q8standard_init ();
bool L4work_E12some_circuit_A8behavior_init_done = false;
int L4work_E12some_circuit_A8behavior_init(){
if (L4work_E12some_circuit_A8behavior_init_done) return 1;
L4work_E12some_circuit_A8behavior_init_done=true;
L4work_E12some_circuit_init ();
L3std_Q8standard_init ();
register_source_file("/home/zorfmorf/repos/vhdl/test.vhdl","test.vhdl");
name_stack iname;
iname.push("");
iname.pop();
return 1;
}

/* end of :work:some_circuit(behavior) Architecture */
