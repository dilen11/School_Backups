#define SpinVersion	"Spin Version 6.0.0 -- 5 December 2010"
#define PanSource	"shift-alt-esc1.pml"

#define G_long	4
#define G_int	4
#ifdef WIN64
	#define ONE_L	((unsigned long) 1)
	#define long	long long
#else
	#define ONE_L	(1L)
#endif
char *TrailFile = PanSource; /* default */
char *trailfilename;
#if defined(BFS)
	#ifndef SAFETY
		#define SAFETY
	#endif
	#ifndef XUSAFE
		#define XUSAFE
	#endif
#endif
#ifndef uchar
	#define uchar	unsigned char
#endif
#ifndef uint
	#define uint	unsigned int
#endif
#define DELTA	500
#ifdef MA
	#if NCORE>1 && !defined(SEP_STATE)
	#define SEP_STATE
	#endif
#if MA==1
	#undef MA
	#define MA	100
#endif
#endif
#ifdef W_XPT
	#if W_XPT==1
		#undef W_XPT
		#define W_XPT 1000000
	#endif
#endif
#ifndef NFAIR
	#define NFAIR	2	/* must be >= 2 */
#endif
#define HAS_CODE
#if defined(RANDSTORE) && !defined(RANDSTOR)
	#define RANDSTOR	RANDSTORE
#endif
#define MERGED	1
#if !defined(HAS_LAST) && defined(BCS)
	#define HAS_LAST	1 /* use it, but */
	#ifndef STORE_LAST
		#define NO_LAST	1 /* dont store it */
	#endif
#endif
#if defined(BCS) && defined(BITSTATE)
	#ifndef NO_CTX
		#define STORE_CTX	1
	#endif
#endif
#ifdef NP
	#define HAS_NP	2
	#define VERI	6	/* np_ */
#endif
#if !defined(NOCLAIM) && !defined NP
	#define NCLAIMS	2
	#define VERI	5
#endif
typedef struct S_F_MAP {
	char *fnm; int from; int upto;
} S_F_MAP;

#define nstates5	6	/* Liveness */
#define endstate5	5
short src_ln5 [] = {
	  0,  16,  16,  15,  18,  18,   0, };
S_F_MAP src_file5 [] = {
	{ ""-"", 0, 0 },
	{ "_spin_nvr.tmp", 1, 5 },
	{ ""-"", 6, 7 }
};
short *src_claim;
uchar reached5 [] = {
	  0,   1,   1,   0,   1,   0,   0, };
uchar *loopstate5;

#define nstates4	10	/* Safety */
#define endstate4	9
short src_ln4 [] = {
	  0,   4,   4,   3,   6,   9,   9,   8, 
	 11,  11,   0, };
S_F_MAP src_file4 [] = {
	{ ""-"", 0, 0 },
	{ "_spin_nvr.tmp", 1, 9 },
	{ ""-"", 10, 11 }
};
uchar reached4 [] = {
	  0,   1,   1,   0,   1,   1,   1,   0, 
	  1,   0,   0, };
uchar *loopstate4;

#define nstates3	12	/* :init: */
#define endstate3	11
short src_ln3 [] = {
	  0, 227, 228, 229, 230, 231, 232, 233, 
	234, 235, 226, 237,   0, };
S_F_MAP src_file3 [] = {
	{ ""-"", 0, 0 },
	{ "shift-alt-esc1.pml", 1, 11 },
	{ ""-"", 12, 13 }
};
uchar reached3 [] = {
	  0,   1,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0, };
uchar *loopstate3;

#define nstates2	34	/* Server */
#define endstate2	33
short src_ln2 [] = {
	  0, 193, 193, 195,  28,  28,  28,  28, 
	197, 198, 199, 200, 201,  27,  27, 203, 
	208, 209, 210, 211, 212, 213, 194, 215, 
	193, 215, 215, 215, 216, 215, 192, 217, 
	192, 217,   0, };
S_F_MAP src_file2 [] = {
	{ ""-"", 0, 0 },
	{ "shift-alt-esc1.pml", 1, 33 },
	{ ""-"", 34, 35 }
};
uchar reached2 [] = {
	  0,   1,   1,   1,   1,   0,   1,   0, 
	  0,   0,   0,   0,   0,   1,   0,   0, 
	  0,   0,   1,   0,   1,   0,   0,   1, 
	  0,   1,   1,   0,   1,   1,   0,   1, 
	  1,   0,   0, };
uchar *loopstate2;

#define nstates1	36	/* Cashier */
#define endstate1	35
short src_ln1 [] = {
	  0, 157, 157, 161,  28,  28,  28,  28, 
	163, 164, 165, 166, 168, 170, 171, 172, 
	173, 174,  27,  27, 176, 177, 178, 179, 
	159, 181, 157, 181, 181, 181, 182, 181, 
	156, 183, 156, 183,   0, };
S_F_MAP src_file1 [] = {
	{ ""-"", 0, 0 },
	{ "shift-alt-esc1.pml", 1, 35 },
	{ ""-"", 36, 37 }
};
uchar reached1 [] = {
	  0,   1,   1,   1,   1,   0,   1,   0, 
	  0,   0,   0,   0,   1,   0,   0,   0, 
	  0,   0,   1,   0,   1,   0,   1,   0, 
	  0,   1,   0,   1,   1,   0,   1,   1, 
	  0,   1,   1,   0,   0, };
uchar *loopstate1;

#define nstates0	33	/* Customer */
#define endstate0	32
short src_ln0 [] = {
	  0, 120, 121, 122, 123, 124, 126,  28, 
	 28,  28,  28, 128, 129, 130, 132, 133, 
	134, 135, 136, 138, 139, 140, 141,  27, 
	 27, 131, 144, 125, 145, 119, 146, 119, 
	146,   0, };
S_F_MAP src_file0 [] = {
	{ ""-"", 0, 0 },
	{ "shift-alt-esc1.pml", 1, 32 },
	{ ""-"", 33, 34 }
};
uchar reached0 [] = {
	  0,   1,   0,   0,   0,   0,   1,   1, 
	  0,   1,   0,   0,   0,   0,   1,   0, 
	  0,   0,   0,   0,   0,   0,   0,   1, 
	  0,   0,   1,   0,   1,   0,   1,   1, 
	  0,   0, };
uchar *loopstate0;
struct {
	int tp; short *src;
} src_all[] = {
	{ 5, &src_ln5[0] },
	{ 4, &src_ln4[0] },
	{ 3, &src_ln3[0] },
	{ 2, &src_ln2[0] },
	{ 1, &src_ln1[0] },
	{ 0, &src_ln0[0] },
	{ 0, (short *) 0 }
};
S_F_MAP *flref[] = {
	src_file5,
	src_file4,
	src_file3,
	src_file2,
	src_file1,
	src_file0 
};
struct {
	char *c; char *t;
} code_lookup[] = {
	{ (char *) 0, "" }
};
#define _T5	71
#define _T2	72
#define T_ID	unsigned char
#define SYNC	0
#define ASYNC	0

#ifndef NCORE
	#ifdef DUAL_CORE
		#define NCORE	2
	#elif QUAD_CORE
		#define NCORE	4
	#else
		#define NCORE	1
	#endif
#endif
char *procname[] = {
   "Customer",
   "Cashier",
   "Server",
   ":init:",
   "Safety",
   "Liveness",
   ":np_:",
};

enum btypes { NONE=0, N_CLAIM=1, I_PROC=2, A_PROC=3, P_PROC=4, E_TRACE=5, N_TRACE=6 };
int Btypes[] = {
   4,	/* Customer */
   4,	/* Cashier */
   4,	/* Server */
   2,	/* :init: */
   1,	/* Safety */
   1,	/* Liveness */
   0	/* :np_: */
};

typedef struct P5 { /* Liveness */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
} P5;
#define Air5	(sizeof(P5) - 3)
typedef struct P4 { /* Safety */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
} P4;
#define Air4	(sizeof(P4) - 3)
#define Pinit	((P3 *)this)
typedef struct P3 { /* :init: */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
} P3;
#define Air3	(sizeof(P3) - 3)
#define PServer	((P2 *)this)
typedef struct P2 { /* Server */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
	unsigned _4_receivedOrder : 1;
	uchar _4_custID;
} P2;
#define Air2	(sizeof(P2) - Offsetof(P2, _4_custID) - 1*sizeof(uchar))
#define PCashier	((P1 *)this)
typedef struct P1 { /* Cashier */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
	unsigned _3_someCustPlacedOrder : 1;
	uchar _3_custID;
	uchar _3_custsOrder;
} P1;
#define Air1	(sizeof(P1) - Offsetof(P1, _3_custsOrder) - 1*sizeof(uchar))
#define PCustomer	((P0 *)this)
typedef struct P0 { /* Customer */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
	uchar favFood;
	uchar id;
} P0;
#define Air0	(sizeof(P0) - Offsetof(P0, id) - 1*sizeof(uchar))
typedef struct P6 { /* np_ */
	unsigned _pid : 8;  /* 0..255 */
	unsigned _t   : 4; /* proctype */
	unsigned _p   : 7; /* state    */
} P6;
#define Air6	(sizeof(P6) - 3)

#ifndef NOCLAIM
	#undef VERI
	#define VERI	7
	#define Pclaim	P7

typedef struct P7 {
	unsigned _pid : 8; /* always zero */
	unsigned _t   : 4; /* active-claim type  */
	unsigned _p   : 7; /* active-claim state */
	unsigned _n   : 2; /* active-claim index */
	uchar c_cur[NCLAIMS]; /* claim-states */
} P7;
uchar spin_c_typ[NCLAIMS]; /* claim-types */
	#define Air7	(0)

#endif
#if defined(BFS) && defined(REACH)
	#undef REACH
#endif
#ifdef VERI
	#define BASE	1
#else
	#define BASE	0
#endif
typedef struct Trans {
	short atom;	/* if &2 = atomic trans; if &8 local */
#ifdef HAS_UNLESS
	short escp[HAS_UNLESS];	/* lists the escape states */
	short e_trans;	/* if set, this is an escp-trans */
#endif
	short tpe[2];	/* class of operation (for reduction) */
	short qu[6];	/* for conditional selections: qid's  */
	uchar ty[6];	/* ditto: type's */
#ifdef NIBIS
	short om;	/* completion status of preselects */
#endif
	char *tp;	/* src txt of statement */
	int st;		/* the nextstate */
	int t_id;	/* transition id, unique within proc */
	int forw;	/* index forward transition */
	int back;	/* index return  transition */
	struct Trans *nxt;
} Trans;

#define qptr(x)	(((uchar *)&now)+(int)q_offset[x])
#define pptr(x)	(((uchar *)&now)+(int)proc_offset[x])
extern uchar *Pptr(int);
#define q_sz(x)	(((Q0 *)qptr(x))->Qlen)

#ifndef VECTORSZ
	#define VECTORSZ	1024           /* sv   size in bytes */
#endif

#define WS	4 /* word size in bytes */
#ifdef VERBOSE
	#ifndef CHECK
		#define CHECK
	#endif
	#ifndef DEBUG
		#define DEBUG
	#endif
#endif
#ifdef SAFETY
	#ifndef NOFAIR
		#define NOFAIR
	#endif
#endif
#ifdef NOREDUCE
	#ifndef XUSAFE
		#define XUSAFE
	#endif
	#if !defined(SAFETY) && !defined(MA)
		#define FULLSTACK
	#endif
#else
	#ifdef BITSTATE
		#if defined(SAFETY) && !defined(HASH64)
			#define CNTRSTACK
		#else
			#define FULLSTACK
		#endif
	#else
		#define FULLSTACK
	#endif
#endif
#ifdef BITSTATE
	#ifndef NOCOMP
		#define NOCOMP
	#endif
	#if !defined(LC) && defined(SC)
		#define LC
	#endif
#endif
#if defined(COLLAPSE2) || defined(COLLAPSE3) || defined(COLLAPSE4)
	/* accept the above for backward compatibility */
	#define COLLAPSE
#endif
#ifdef HC
	#undef HC
	#define HC4
#endif
#ifdef HC0
	#define HC	0
#endif
#ifdef HC1
	#define HC	1
#endif
#ifdef HC2
	#define HC	2
#endif
#ifdef HC3
	#define HC	3
#endif
#ifdef HC4
	#define HC	4
#endif
#ifdef COLLAPSE
	#if NCORE>1 && !defined(SEP_STATE)
		unsigned long *ncomps;	/* in shared memory */
	#else
		unsigned long ncomps[256+2];
	#endif
#endif
#define MAXQ   	255
#define MAXPROC	255

typedef struct Stack  {	 /* for queues and processes */
#if VECTORSZ>32000
	int o_delta;
	int o_offset;
	int o_skip;
	int o_delqs;
#else
	short o_delta;
	short o_offset;
	short o_skip;
	short o_delqs;
#endif
	short o_boq;
#ifndef XUSAFE
	char *o_name;
#endif
	char *body;
	struct Stack *nxt;
	struct Stack *lst;
} Stack;

typedef struct Svtack { /* for complete state vector */
#if VECTORSZ>32000
	int o_delta;
	int m_delta;
#else
	short o_delta;	 /* current size of frame */
	short m_delta;	 /* maximum size of frame */
#endif
#if SYNC
	short o_boq;
#endif
#define StackSize	(WS)
	char *body;
	struct Svtack *nxt;
	struct Svtack *lst;
} Svtack;

Trans ***trans;	/* 1 ptr per state per proctype */

struct H_el *Lstate;
int depthfound = -1;	/* loop detection */
#if VECTORSZ>32000
	int proc_offset[MAXPROC];
	int q_offset[MAXQ];
#else
	short proc_offset[MAXPROC];
	short q_offset[MAXQ];
#endif
uchar proc_skip[MAXPROC];
uchar q_skip[MAXQ];
unsigned long  vsize;	/* vector size in bytes */
#ifdef SVDUMP
	int vprefix=0, svfd;	/* runtime option -pN */
#endif
char *tprefix = "trail";	/* runtime option -tsuffix */
short boq = -1;		/* blocked_on_queue status */
typedef struct State {
	uchar _nr_pr;
	uchar _nr_qs;
	uchar   _a_t;	/* cycle detection */
#ifndef NOFAIR
	uchar   _cnt[NFAIR];	/* counters, weak fairness */
#endif
#ifndef NOVSZ
#if VECTORSZ<65536
	unsigned short _vsz;
#else
	unsigned long  _vsz;
#endif
#endif
#ifdef HAS_LAST
	uchar  _last;	/* pid executed in last step */
#endif
#if defined(BITSTATE) && defined(BCS) && defined(STORE_CTX)
	uchar  _ctx;	/* nr of context switches so far */
#endif
#ifdef EVENT_TRACE
	#if nstates_event<256
		uchar _event;
	#else
		unsigned short _event;
	#endif
#endif
	unsigned cashierBusy : 1;
	uchar customerWaiting[3];
	uchar custPlacedOrder[3];
	uchar orderTaken[3];
	unsigned someCustSelected : 1;
	uchar custOrderSent[3];
	uchar serverBusy[1];
	uchar orderFulfilled[3];
	uchar customerMutex[3];
	uchar cashierMutex;
	uchar serverMutex[1];
	uchar foodArray[4];
	uchar customerOrder[3];
	uchar sv[VECTORSZ];
} State;

#define HAS_TRACK	0
/* hidden variable: */	uchar customerInStore[3];
/* hidden variable: */	uchar custMutex;
/* hidden variable: */	uchar allFoods[4];
int _; /* a predefined write-only variable */

#define FORWARD_MOVES	"pan.m"
#define REVERSE_MOVES	"pan.b"
#define TRANSITIONS	"pan.t"
#define _NP_	6
uchar reached6[3];  /* np_ */
uchar *loopstate6;  /* np_ */
#define nstates6	3 /* np_ */
#define endstate6	2 /* np_ */

#define start6	0 /* np_ */
#define start5	3
#define start4	3
#define start3	10
#define start2	30
#define start1	32
#define start0	29
#ifdef NP
	#define ACCEPT_LAB	1 /* at least 1 in np_ */
#else
	#define ACCEPT_LAB	3 /* user-defined accept labels */
#endif
#ifdef MEMCNT
	#ifdef MEMLIM
		#warning -DMEMLIM takes precedence over -DMEMCNT
		#undef MEMCNT
	#else
		#if MEMCNT<20
			#warning using minimal value -DMEMCNT=20 (=1MB)
			#define MEMLIM	(1)
			#undef MEMCNT
		#else
			#if MEMCNT==20
				#define MEMLIM	(1)
				#undef MEMCNT
			#else
			 #if MEMCNT>=50
				#error excessive value for MEMCNT
			 #else
				#define MEMLIM	(1<<(MEMCNT-20))
			 #endif
			#endif
		#endif
	#endif
#endif
#if NCORE>1 && !defined(MEMLIM)
	#define MEMLIM	(2048)	/* need a default, using 2 GB */
#endif
#define PROG_LAB	0 /* progress labels */
uchar *accpstate[7];
uchar *progstate[7];
uchar *loopstate[7];
uchar *reached[7];
uchar *stopstate[7];
uchar *visstate[7];
short *mapstate[7];
#ifdef HAS_CODE
	int NrStates[7];
#endif
#define NQS	0
short q_flds[1];
short q_max[1];
typedef struct Q0 {	/* generic q */
	uchar Qlen;	/* q_size */
	uchar _t;
} Q0;

/** function prototypes **/
char *emalloc(unsigned long);
char *Malloc(unsigned long);
int Boundcheck(int, int, int, int, Trans *);
int addqueue(int, int);
/* int atoi(char *); */
/* int abort(void); */
int close(int);
int delproc(int, int);
int endstate(void);
int hstore(char *, int);
#ifdef MA
int gstore(char *, int, uchar);
#endif
int q_cond(short, Trans *);
int q_full(int);
int q_len(int);
int q_zero(int);
int qrecv(int, int, int, int);
int unsend(int);
/* void *sbrk(int); */
void Uerror(char *);
void spin_assert(int, char *, int, int, Trans *);
void c_chandump(int);
void c_globals(void);
void c_locals(int, int);
void checkcycles(void);
void crack(int, int, Trans *, short *);
void d_sfh(const char *, int);
void sfh(const char *, int);
void d_hash(uchar *, int);
void s_hash(uchar *, int);
void r_hash(uchar *, int);
void delq(int);
void dot_crack(int, int, Trans *);
void do_reach(void);
void pan_exit(int);
void exit(int);
void hinit(void);
void imed(Trans *, int, int, int);
void new_state(void);
void p_restor(int);
void putpeg(int, int);
void putrail(void);
void q_restor(void);
void retrans(int, int, int, short *, uchar *, uchar *);
void settable(void);
void setq_claim(int, int, char *, int, char *);
void sv_restor(void);
void sv_save(void);
void tagtable(int, int, int, short *, uchar *);
void do_dfs(int, int, int, short *, uchar *, uchar *);
void uerror(char *);
void unrecv(int, int, int, int, int);
void usage(FILE *);
void wrap_stats(void);
#if defined(FULLSTACK) && defined(BITSTATE)
	int  onstack_now(void);
	void onstack_init(void);
	void onstack_put(void);
	void onstack_zap(void);
#endif
#ifndef XUSAFE
	int q_S_check(int, int);
	int q_R_check(int, int);
	uchar q_claim[MAXQ+1];
	char *q_name[MAXQ+1];
	char *p_name[MAXPROC+1];
#endif
void qsend(int, int, int);
#define Addproc(x)	addproc(x, 0, 0)
#define LOCAL	1
#define Q_FULL_F	2
#define Q_EMPT_F	3
#define Q_EMPT_T	4
#define Q_FULL_T	5
#define TIMEOUT_F	6
#define GLOBAL	7
#define BAD	8
#define ALPHA_F	9
#define NTRANS	73
#ifdef PEG
	long peg[NTRANS];
#endif
void select_claim(int);
