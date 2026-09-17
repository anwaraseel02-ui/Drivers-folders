#pragma once

#define SET_BIT(REG, BIT) REG |=(1<<BIT)
#define TOG_BIT(REG, BIT) REG ^=(1<<BIT)
#define CLR_BIT(REG, BIT) REG &=~(1<<BIT)
#define GET_BIT(REG, BIT) ((REG &(1<<BIT))>>BIT)

#define IS_BIT_SET(REG, BIT) ((REG &(1<<BIT))>>BIT)
#define IS_BIT_CLR(REG, BIT) (!((REG &(1<<BIT))>>BIT))